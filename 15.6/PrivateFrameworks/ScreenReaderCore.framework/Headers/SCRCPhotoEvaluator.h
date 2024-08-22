// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCRCPHOTOEVALUATOR_H
#define SCRCPHOTOEVALUATOR_H


#import <Foundation/Foundation.h>


@interface SCRCPhotoEvaluator : NSObject



+(id)sharedInstance;
-(id)evaluateImage:(struct CGImage *)arg0 forCriteria:(NSUInteger)arg1 inRect:(struct CGRect )arg2 ;


@end


#endif