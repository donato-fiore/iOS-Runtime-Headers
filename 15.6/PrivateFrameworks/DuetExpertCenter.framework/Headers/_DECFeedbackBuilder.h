// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DECFEEDBACKBUILDER_H
#define _DECFEEDBACKBUILDER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _DECFeedbackBuilder : NSObject {
    id *_feedbackHandler;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)initWithFeedbackHandler:(id)arg0 ;
-(void)receiveFeedback:(id)arg0 result:(id)arg1 metadata:(id)arg2 engaged:(BOOL)arg3 ;


@end


#endif