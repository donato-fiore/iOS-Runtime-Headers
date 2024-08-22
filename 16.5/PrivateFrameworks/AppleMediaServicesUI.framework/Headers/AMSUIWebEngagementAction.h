// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBENGAGEMENTACTION_H
#define AMSUIWEBENGAGEMENTACTION_H

@class NSString, NSDictionary, NSArray;
@protocol AMSUIWebActionRunnable;


#import "AMSUIWebAction.h"
#import "AMSUIWebClientContext.h"

@interface AMSUIWebEngagementAction : AMSUIWebAction <AMSUIWebActionRunnable>



@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *messagePlacements; // ivar: _messagePlacements
@property (readonly, nonatomic) NSString *messageServiceType; // ivar: _messageServiceType
@property (readonly) Class superclass;


-(id)_resultFromMessageResponse:(id)arg0 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif