// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBDELEGATEACTION_H
#define AMSUIWEBDELEGATEACTION_H

@class NSString, NSDictionary;
@protocol AMSUIWebActionRunnable;


#import "AMSUIWebAction.h"
#import "AMSUIWebClientContext.h"

@interface AMSUIWebDelegateAction : AMSUIWebAction <AMSUIWebActionRunnable>



@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *delegateData; // ivar: _delegateData
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_didResolveWithResult:(id)arg0 error:(id)arg1 ;
-(id)_handleActionObject:(id)arg0 ;
-(id)_handleResolveActionWithData:(id)arg0 ;
-(id)_infoWithBuyParams:(id)arg0 additionalInfo:(id)arg1 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif