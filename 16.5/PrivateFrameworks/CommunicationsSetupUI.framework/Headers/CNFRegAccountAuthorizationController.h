// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNFREGACCOUNTAUTHORIZATIONCONTROLLER_H
#define CNFREGACCOUNTAUTHORIZATIONCONTROLLER_H

@class NSString;
@protocol CNFRegAccountAuthorizationDelegate;


#import "CNFRegAccountWebViewController.h"

@interface CNFRegAccountAuthorizationController : CNFRegAccountWebViewController

@property (copy, nonatomic) NSString *authID; // ivar: _authID
@property (copy, nonatomic) NSString *authToken; // ivar: _authToken
@property (nonatomic) NSObject<CNFRegAccountAuthorizationDelegate> *delegate; // ivar: _delegate


-(id)authIdHeaderValue;
-(id)bagKey;
-(id)initWithRegController:(id)arg0 authID:(id)arg1 token:(id)arg2 ;
-(id)logName;
-(void)cancelTapped;
-(void)completeHandoffWithStatus:(int)arg0 appleID:(id)arg1 authID:(id)arg2 authToken:(id)arg3 ;
-(void)dealloc;


@end


#endif