// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNFREGCREATEACCOUNTCONTROLLER_H
#define CNFREGCREATEACCOUNTCONTROLLER_H

@protocol CNFRegCreateAccountControllerDelegate;


#import "CNFRegAccountWebViewController.h"

@interface CNFRegCreateAccountController : CNFRegAccountWebViewController

@property (nonatomic) NSObject<CNFRegCreateAccountControllerDelegate> *delegate; // ivar: _delegate


-(id)bagKey;
-(id)logName;
-(void)cancelTapped;
-(void)completeHandoffWithStatus:(int)arg0 appleID:(id)arg1 authID:(id)arg2 authToken:(id)arg3 ;
-(void)dealloc;


@end


#endif