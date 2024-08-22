// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARCONFIGURATIONMETRIC_H
#define AVTAVATARCONFIGURATIONMETRIC_H

@class NSString;
@protocol AVTAvatarConfigurationMetric;

#import <Foundation/Foundation.h>


@interface AVTAvatarConfigurationMetric : NSObject <AVTAvatarConfigurationMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)gapFromDistance:(NSUInteger)arg0 ;
+(NSInteger)impactForSettingKind:(struct ? )arg0 ;
+(NSUInteger)differenceCountFromDistance:(NSUInteger)arg0 ;
+(NSUInteger)distanceFromConfiguration:(id)arg0 toConfiguration:(id)arg1 ;
+(id)defaultMetric;
+(void)enumerateDifferencesFromConfiguration:(id)arg0 toConfiguration:(id)arg1 withHandler:(id)arg2 ;
-(NSInteger)gapFromDistance:(NSUInteger)arg0 ;
-(NSUInteger)differenceCountFromDistance:(NSUInteger)arg0 ;
-(NSUInteger)distanceFromConfiguration:(id)arg0 toConfiguration:(id)arg1 ;


@end


#endif