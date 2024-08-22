// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXAPPMODEENTITY_H
#define ATXAPPMODEENTITY_H

@class NSString, NSArray;
@protocol ATXModeEntityProtocol;

#import <Foundation/Foundation.h>

#import "ATXModeEntityScore.h"

@interface ATXAppModeEntity : NSObject <ATXModeEntityProtocol>



@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *itunesGenreIds; // ivar: _itunesGenreIds
@property (retain, nonatomic) ATXModeEntityScore *scoreMetadata; // ivar: scoreMetadata
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)identifier;
-(id)init;
-(id)initWithBundleId:(id)arg0 ;
-(id)initWithBundleId:(id)arg0 itunesGenreIds:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)jsonDict;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif