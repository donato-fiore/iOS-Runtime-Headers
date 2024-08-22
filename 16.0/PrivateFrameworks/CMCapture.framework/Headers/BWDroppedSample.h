// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWDROPPEDSAMPLE_H
#define BWDROPPEDSAMPLE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface BWDroppedSample : NSObject {
    NSString *_reason;
    ? _pts;
    NSArray *_backPressureSemaphoresToIgnore;
}


@property (readonly) NSArray *backPressureSemaphoresToIgnore;
@property (readonly) ? pts;
@property (readonly) NSString *reason;


+(id)newDroppedSampleFromDroppedSample:(id)arg0 backPressureSemaphoresToIgnore:(id)arg1 ;
+(id)newDroppedSampleWithReason:(id)arg0 pts:(struct ? )arg1 ;
-(void)dealloc;


@end


#endif