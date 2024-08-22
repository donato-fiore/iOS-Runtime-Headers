// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIWEBMARKETINGITEMACTION_H
#define AMSUIWEBMARKETINGITEMACTION_H

@class ACAccount, NSString, NSDictionary;
@protocol AMSUIWebActionRunnable;


#import "AMSUIWebAction.h"

@interface AMSUIWebMarketingItemAction : AMSUIWebAction <AMSUIWebActionRunnable>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) NSString *clientVersion; // ivar: _clientVersion
@property (readonly, nonatomic) NSDictionary *contextInfo; // ivar: _contextInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *offerHints; // ivar: _offerHints
@property (readonly, nonatomic) NSString *placement; // ivar: _placement
@property (readonly, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly) Class superclass;


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif