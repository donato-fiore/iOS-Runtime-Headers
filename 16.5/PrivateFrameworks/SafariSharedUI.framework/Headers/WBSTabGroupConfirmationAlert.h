// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSTABGROUPCONFIRMATIONALERT_H
#define WBSTABGROUPCONFIRMATIONALERT_H

@class UIAlertController, NSString, WBTabGroup, WBTabGroupManager;
@protocol WBSTabGroupConfirmationAlertDelegate;



@interface WBSTabGroupConfirmationAlert : UIAlertController {
    BOOL _automaticallyConfirm;
    NSString *_confirmButtonTitle;
    NSString *_message;
    id *_resultHandler;
    NSString *_title;
}


@property (weak, nonatomic) NSObject<WBSTabGroupConfirmationAlertDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger role; // ivar: _role
@property (readonly, nonatomic) WBTabGroup *tabGroup; // ivar: _tabGroup
@property (readonly, nonatomic) WBTabGroupManager *tabGroupManager; // ivar: _tabGroupManager


+(id)deleteConfirmationAlertWithTabGroup:(id)arg0 manager:(id)arg1 delegate:(id)arg2 ;
-(id)_representativeHost;
-(void)_configureAlert;
-(void)_handleResult:(BOOL)arg0 ;
-(void)_initializeStringsForDeleteConfirmation;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)presentFromViewController:(id)arg0 withResultHandler:(id)arg1 ;


@end


#endif