// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSBUTTONHAPTICSCONTROLLER_H
#define BKSBUTTONHAPTICSCONTROLLER_H


#import <Foundation/Foundation.h>


@interface BKSButtonHapticsController : NSObject



+(id)sharedInstance;
-(void)applyDefinitions:(id)arg0 ;
-(void)playHapticIdentifier:(NSInteger)arg0 speed:(NSUInteger)arg1 ;


@end


#endif