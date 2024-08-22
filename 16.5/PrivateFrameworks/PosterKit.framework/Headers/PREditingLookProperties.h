// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREDITINGLOOKPROPERTIES_H
#define PREDITINGLOOKPROPERTIES_H

@class NSString;
@protocol BSDescriptionStreamable, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "PRTimeFontConfiguration.h"
#import "PRPosterColor.h"

@interface PREditingLookProperties : NSObject <BSDescriptionStreamable, NSCopying, NSMutableCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) PRTimeFontConfiguration *timeFontConfiguration;
@property (readonly, copy, nonatomic) PRPosterColor *titlePosterColor;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithProperties:(id)arg0 ;
-(id)initWithTimeFontConfiguration:(id)arg0 titlePosterColor:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;


@end


#endif