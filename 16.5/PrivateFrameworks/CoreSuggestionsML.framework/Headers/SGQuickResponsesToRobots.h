// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGQUICKRESPONSESTOROBOTS_H
#define SGQUICKRESPONSESTOROBOTS_H


#import <Foundation/Foundation.h>


@interface SGQuickResponsesToRobots : NSObject



+(BOOL)insignificantSender:(id)arg0 ;
+(BOOL)presentInContext:(id)arg0 context:(id)arg1 startIdx:(NSInteger)arg2 endIdx:(NSInteger)arg3 ;
+(float)allCapsRatio:(id)arg0 ;
+(id)contactStore;
+(id)repliesToRobot:(id)arg0 language:(id)arg1 recipients:(id)arg2 ;
+(id)repliesToRobot:(id)arg0 language:(id)arg1 recipients:(id)arg2 config:(id)arg3 ;
+(void)warmup;


@end


#endif