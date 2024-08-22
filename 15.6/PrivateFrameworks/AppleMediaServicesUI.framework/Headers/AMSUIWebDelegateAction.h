// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIWEBDELEGATEACTION_H
#define AMSUIWEBDELEGATEACTION_H

@class NSString, NSDictionary;
@protocol AMSUIWebActionRunnable;


#import "AMSUIWebAction.h"

@interface AMSUIWebDelegateAction : AMSUIWebAction <AMSUIWebActionRunnable>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *delegateData; // ivar: _delegateData
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_didResolveWithResult:(id)arg0 error:(id)arg1 ;
-(id)_handleActionObject:(id)arg0 ;
-(id)_handleResolveAction;
-(id)_infoWithBuyParams:(id)arg0 additionalInfo:(id)arg1 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif