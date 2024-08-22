// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNFREGVIEWACCOUNTCONTROLLER_H
#define CNFREGVIEWACCOUNTCONTROLLER_H

@protocol CNFRegViewAccountControllerDelegate;


#import "CNFRegSecureAccountWebViewController.h"

@interface CNFRegViewAccountController : CNFRegSecureAccountWebViewController

@property (nonatomic) NSObject<CNFRegViewAccountControllerDelegate> *delegate; // ivar: _delegate


-(id)bagKey;
-(id)logName;
-(void)cancelTapped;
-(void)completeHandoffWithStatus:(int)arg0 appleID:(id)arg1 authID:(id)arg2 authToken:(id)arg3 ;
-(void)dealloc;


@end


#endif