// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBBUSINESSCHATACTION_H
#define AMSUIWEBBUSINESSCHATACTION_H

@class NSString;
@protocol AMSUIWebActionRunnable;


#import "AMSUIWebAction.h"
#import "AMSUIWebClientContext.h"

@interface AMSUIWebBusinessChatAction : AMSUIWebAction <AMSUIWebActionRunnable>



@property (retain, nonatomic) NSString *body; // ivar: _body
@property (retain, nonatomic) NSString *businessGroupID; // ivar: _businessGroupID
@property (retain, nonatomic) NSString *businessID; // ivar: _businessID
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *intentID; // ivar: _intentID
@property (readonly) Class superclass;


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)makeBusinessChatDeeplink;
-(id)runAction;


@end


#endif