// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNFREGCHANGEACCOUNTPASSWORDCONTROLLER_H
#define CNFREGCHANGEACCOUNTPASSWORDCONTROLLER_H

@class NSString;
@protocol CNFRegChangeAccountPasswordDelegate;


#import "CNFRegAuthorizedAccountWebViewController.h"

@interface CNFRegChangeAccountPasswordController : CNFRegAuthorizedAccountWebViewController

@property (copy, nonatomic) NSString *appleID; // ivar: _appleID
@property (nonatomic) NSObject<CNFRegChangeAccountPasswordDelegate> *delegate; // ivar: _delegate


-(BOOL)canSendURLRequest:(id)arg0 ;
-(id)bagKey;
-(id)initWithRegController:(id)arg0 appleID:(id)arg1 ;
-(id)logName;
-(id)overrideURLForURL:(id)arg0 ;
-(void)cancelTapped;
-(void)completeHandoffWithStatus:(int)arg0 appleID:(id)arg1 authID:(id)arg2 authToken:(id)arg3 ;
-(void)dealloc;
-(void)setHeadersForRequest:(id)arg0 ;


@end


#endif