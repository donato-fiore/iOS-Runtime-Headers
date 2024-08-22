// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWORKFLOWRUNREQUEST_H
#define WFWORKFLOWRUNREQUEST_H

@class NSData, NSString, WFContentCollection, NSDictionary, NSXPCListenerEndpoint;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WFWorkflowRunDescriptor.h"

@interface WFWorkflowRunRequest : NSObject <NSSecureCoding>



@property (nonatomic) BOOL allowsDialogNotifications; // ivar: _allowsDialogNotifications
@property (readonly, nonatomic) NSData *archivedInput; // ivar: _archivedInput
@property (copy, nonatomic) NSString *automationType; // ivar: _automationType
@property (retain, nonatomic) WFContentCollection *cachedInput; // ivar: _cachedInput
@property (readonly, nonatomic) WFWorkflowRunDescriptor *descriptor; // ivar: _descriptor
@property (nonatomic) BOOL donateInteraction; // ivar: _donateInteraction
@property (nonatomic) NSUInteger focusHandling; // ivar: _focusHandling
@property (nonatomic) BOOL isAutomationSuggestion; // ivar: _isAutomationSuggestion
@property (copy, nonatomic) NSDictionary *listenerEndpoints; // ivar: _listenerEndpoints
@property (nonatomic) BOOL logRunEvent; // ivar: _logRunEvent
@property (nonatomic) NSUInteger outputBehavior; // ivar: _outputBehavior
@property (retain, nonatomic) NSString *parentRunningContextIdentifier; // ivar: _parentRunningContextIdentifier
@property (readonly, nonatomic) NSUInteger presentationMode; // ivar: _presentationMode
@property (readonly, nonatomic) id *queueIdentifier;
@property (retain, nonatomic) NSXPCListenerEndpoint *remoteDialogPresenterEndpoint; // ivar: _remoteDialogPresenterEndpoint
@property (copy, nonatomic) NSString *runSource; // ivar: _runSource
@property (copy, nonatomic) NSString *trialID; // ivar: _trialID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDescriptor:(id)arg0 input:(id)arg1 presentationMode:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getInputWithCompletionHandler:(id)arg0 ;


@end


#endif