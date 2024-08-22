// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNRESOURCECOORDINATORXPCPUBLISHER_H
#define SNRESOURCECOORDINATORXPCPUBLISHER_H

@class NSString;
@protocol SNResourceCoordinatorProtocol, SNResourceCoordinatorXPCProtocol><NSXPCProxyCreating;

#import <Foundation/Foundation.h>


@interface SNResourceCoordinatorXPCPublisher : NSObject <SNResourceCoordinatorProtocol>

 {
    id<SNResourceCoordinatorXPCProtocol><NSXPCProxyCreating> *_subscriber;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createSystemAudioAnalyzer;
-(id)init;
-(id)initWithSubscriber:(id)arg0 ;


@end


#endif