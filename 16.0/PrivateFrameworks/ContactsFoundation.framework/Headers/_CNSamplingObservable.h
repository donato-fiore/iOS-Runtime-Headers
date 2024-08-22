// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNSAMPLINGOBSERVABLE_H
#define _CNSAMPLINGOBSERVABLE_H

@protocol CNObservable, CNCancelable;


#import "CNObservable.h"

@interface _CNSamplingObservable : CNObservable

@property (readonly, nonatomic) NSObject<CNObservable> *observable; // ivar: _observable
@property (retain) id *sample; // ivar: _sample
@property (readonly, nonatomic) NSObject<CNObservable> *sampler; // ivar: _sampler
@property (retain) NSObject<CNCancelable> *timer; // ivar: _timer


-(id)initWithObservable:(id)arg0 sampler:(id)arg1 ;
-(id)subscribe:(id)arg0 ;
-(void)receiveResult:(id)arg0 ;
-(void)sendSampleToObserver:(id)arg0 ;


@end


#endif