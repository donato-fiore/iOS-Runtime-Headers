// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNRESULTSXPCPUBLISHER_H
#define SNRESULTSXPCPUBLISHER_H

@class NSString;
@protocol SNResultsObserving, SNResultsObservingXPCProtocol><NSXPCProxyCreating;

#import <Foundation/Foundation.h>


@interface SNResultsXPCPublisher : NSObject <SNResultsObserving>

 {
    id<SNResultsObservingXPCProtocol><NSXPCProxyCreating> *_subscriber;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithSubscriber:(id)arg0 ;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)request:(id)arg0 didProduceResult:(id)arg1 ;
-(void)requestDidComplete:(id)arg0 ;


@end


#endif