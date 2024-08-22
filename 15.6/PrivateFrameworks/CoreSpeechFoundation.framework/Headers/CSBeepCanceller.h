// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSBEEPCANCELLER_H
#define CSBEEPCANCELLER_H

@class NSDictionary;
@protocol OS_dispatch_queue, CSBeepCancellerDelegate;

#import <Foundation/Foundation.h>


@interface CSBeepCanceller : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    unique_ptr<BatchBeepCanceller, std::default_delete<BatchBeepCanceller>> _beepCanceller;
    vector<float, std::allocator<float>> _beepFloatVec;
    vector<float, std::allocator<float>> _floatBuffer;
    vector<short, std::allocator<short>> _shortBuffer;
    NSUInteger _numTotalInputSamples;
    NSUInteger _numTotalOutputSamples;
}


@property (weak, nonatomic) NSObject<CSBeepCancellerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSDictionary *metrics;


-(id)init;
-(void)cancelBeepFromSamples:(id)arg0 timestamp:(NSUInteger)arg1 ;
-(void)flush;
-(void)reset;
-(void)willBeep;


@end


#endif