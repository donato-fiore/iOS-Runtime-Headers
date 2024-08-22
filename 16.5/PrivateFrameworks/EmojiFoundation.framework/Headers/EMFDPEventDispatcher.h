// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMFDPEVENTDISPATCHER_H
#define EMFDPEVENTDISPATCHER_H

@protocol EMFDPReportingDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EMFDPEventDispatcher : NSObject {
    id<EMFDPReportingDelegate> *_reportingDelegate;
    NSObject<OS_dispatch_queue> *_reportingBackgroundQueue;
}




-(id)init;
-(id)initWithReportingDelegate:(id)arg0 ;
-(void)didUseEmoji:(id)arg0 usageModeIdentifier:(id)arg1 ;
-(void)didUseEmoji:(id)arg0 usageModeIdentifier:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif