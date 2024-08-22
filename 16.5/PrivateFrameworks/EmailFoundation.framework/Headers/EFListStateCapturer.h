// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFLISTSTATECAPTURER_H
#define EFLISTSTATECAPTURER_H

@protocol EFCancelable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EFListStateCapturer : NSObject

@property (readonly, nonatomic) NSObject<EFCancelable> *stateCaptureCancelable; // ivar: _stateCaptureCancelable
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateCaptureQueue; // ivar: _stateCaptureQueue


-(id)initWithTitle:(id)arg0 itemName:(id)arg1 headLimit:(NSUInteger)arg2 tailLimit:(NSUInteger)arg3 delegate:(id)arg4 ;
-(void)dealloc;


@end


#endif