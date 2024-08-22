// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AEASSESSMENTSTATEPUBLISHINGPROXY_H
#define AEASSESSMENTSTATEPUBLISHINGPROXY_H

@protocol AEAssessmentStatePublishing, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AEXPCProxy.h"

@interface AEAssessmentStatePublishingProxy : NSObject <AEAssessmentStatePublishing>

 {
    AEXPCProxy *_xpcProxy;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)proxyWithEndpoint:(id)arg0 queue:(id)arg1 ;
-(void)endPublications:(id)arg0 ;
-(void)publishAssessmentState:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif