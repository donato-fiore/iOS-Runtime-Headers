// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPRESENTEDDIALOG_H
#define WFPRESENTEDDIALOG_H

@class WFWorkflowRunningContext, WFDialogRequest, WFDialogResponse;

#import <Foundation/Foundation.h>


@interface WFPresentedDialog : NSObject

@property (readonly, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) WFWorkflowRunningContext *context; // ivar: _context
@property (readonly, nonatomic) NSUInteger presentationMode; // ivar: _presentationMode
@property (readonly, nonatomic) WFDialogRequest *request; // ivar: _request
@property (retain, nonatomic) WFDialogResponse *response; // ivar: _response


-(id)initWithRequest:(id)arg0 presentationMode:(NSUInteger)arg1 runningContext:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif