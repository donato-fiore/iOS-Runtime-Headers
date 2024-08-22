// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MXINTENTRESPONSEOBSERVERPROXY_H
#define _MXINTENTRESPONSEOBSERVERPROXY_H

@class NSString;
@protocol INIntentResponseObserver, _MXIntentResponseObserver;

#import <Foundation/Foundation.h>


@interface _MXIntentResponseObserverProxy : NSObject <INIntentResponseObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<_MXIntentResponseObserver> *observer; // ivar: _observer
@property (readonly) Class superclass;


-(id)initWithObserver:(id)arg0 ;
-(void)didReceiveError:(id)arg0 ;
-(void)intentResponseDidUpdate:(id)arg0 ;
-(void)intentResponseDidUpdate:(id)arg0 withSerializedCacheItems:(id)arg1 ;
-(void)stopObserving;


@end


#endif