// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNRESULTSXPCSUBSCRIBER_H
#define SNRESULTSXPCSUBSCRIBER_H

@class NSString;
@protocol SNResultsObserving, SNResultsObservingXPCProtocol;

#import <Foundation/Foundation.h>


@interface SNResultsXPCSubscriber : NSObject <SNResultsObserving, SNResultsObservingXPCProtocol>

 {
    id<SNResultsObserving> *_receiver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)request:(id)arg0 didProduceResult:(id)arg1 ;
-(void)requestDidComplete:(id)arg0 ;
-(void)xpcRequest:(id)arg0 didFailWithError:(id)arg1 completionHandler:(id)arg2 ;
-(void)xpcRequest:(id)arg0 didProduceResult:(id)arg1 completionHandler:(id)arg2 ;
-(void)xpcRequestDidComplete:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif