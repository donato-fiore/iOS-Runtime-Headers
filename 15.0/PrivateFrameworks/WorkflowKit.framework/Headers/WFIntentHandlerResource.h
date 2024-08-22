// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFINTENTHANDLERRESOURCE_H
#define WFINTENTHANDLERRESOURCE_H

@class NSString;
@protocol WFActionEventObserver;


#import "WFResource.h"
#import "WFHandleIntentAction.h"

@interface WFIntentHandlerResource : WFResource <WFActionEventObserver>



@property (weak, nonatomic) WFHandleIntentAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL requiresIntentSupport; // ivar: _requiresIntentSupport
@property (readonly) Class superclass;


-(void)action:(id)arg0 parameterStateDidChangeForKey:(id)arg1 ;
-(void)refreshAvailability;
-(void)setupWithAction:(id)arg0 ;


@end


#endif