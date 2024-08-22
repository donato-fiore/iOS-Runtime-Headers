// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXWIDGETMODEENTITY_H
#define ATXWIDGETMODEENTITY_H

@class NSString, CHSWidget;
@protocol ATXModeEntityProtocol;

#import <Foundation/Foundation.h>

#import "ATXModeEntityScore.h"

@interface ATXWidgetModeEntity : NSObject <ATXModeEntityProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ATXModeEntityScore *scoreMetadata; // ivar: _scoreMetadata
@property (readonly) Class superclass;
@property (copy, nonatomic) CHSWidget *widget; // ivar: _widget


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)identifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWidget:(id)arg0 ;
-(id)jsonDict;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif