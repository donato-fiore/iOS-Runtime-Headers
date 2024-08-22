// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCSIGNPOSTMANAGER_H
#define MCSIGNPOSTMANAGER_H


#import <Foundation/Foundation.h>


@interface MCSignpostManager : NSObject



+(id)signpostsForTypeFilter:(NSUInteger)arg0 featureFilter:(id)arg1 duration:(CGFloat)arg2 error:(*id)arg3 ;
+(void)willGetFeature:(id)arg0 ;
+(void)willPostEffectiveSettingsChangedNotification;
+(void)willSetFeature:(id)arg0 ;


@end


#endif