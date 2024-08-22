// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYRETRIEVALCOMPLETIONTUPLE_H
#define HMDACCESSORYRETRIEVALCOMPLETIONTUPLE_H

@class HMFObject, NSMutableArray, NSString, HMFTimer;
@protocol HMFTimerDelegate;


#import "HMDAccessory.h"
#import "HMDHome.h"

@interface HMDAccessoryRetrievalCompletionTuple : HMFObject <HMFTimerDelegate>



@property (weak, nonatomic) HMDAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) NSMutableArray *completions; // ivar: _completions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (nonatomic) NSInteger linkType; // ivar: _linkType
@property (nonatomic) CGFloat retrievalTimeout; // ivar: _retrievalTimeout
@property (readonly) Class superclass;
@property (retain, nonatomic) HMFTimer *timer; // ivar: _timer


-(id)initWithHome:(id)arg0 accessory:(id)arg1 linkType:(NSInteger)arg2 ;
-(void)addCompletion:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)timerDidFire:(id)arg0 ;


@end


#endif