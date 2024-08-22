// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TFCRASHSIMULATOR_H
#define TFCRASHSIMULATOR_H


#import <Foundation/Foundation.h>


@interface TFCrashSimulator : NSObject



-(void)triggerSIGBUS;
-(void)triggerSIGILL;
-(void)triggerSIGSEGV;


@end


#endif