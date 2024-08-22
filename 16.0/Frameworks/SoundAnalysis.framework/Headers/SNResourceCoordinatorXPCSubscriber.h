// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNRESOURCECOORDINATORXPCSUBSCRIBER_H
#define SNRESOURCECOORDINATORXPCSUBSCRIBER_H

@class NSString;
@protocol SNResourceCoordinatorProtocol, SNResourceCoordinatorXPCProtocol;

#import <Foundation/Foundation.h>


@interface SNResourceCoordinatorXPCSubscriber : NSObject <SNResourceCoordinatorProtocol, SNResourceCoordinatorXPCProtocol>

 {
    id<SNResourceCoordinatorProtocol> *_receiver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createSystemAudioAnalyzer;
-(id)init;
-(void)xpcCreateSystemAudioAnalyzerWithCompletionHandler:(id)arg0 ;


@end


#endif