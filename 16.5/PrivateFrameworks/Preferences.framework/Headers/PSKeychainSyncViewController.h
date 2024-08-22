// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSKEYCHAINSYNCVIEWCONTROLLER_H
#define PSKEYCHAINSYNCVIEWCONTROLLER_H

@protocol KeychainSyncViewController, KeychainSyncViewControllerDelegate;


#import "PSListController.h"
#import "PSKeychainSyncHeaderView.h"
#import "PSSpecifier.h"

@interface PSKeychainSyncViewController : PSListController <KeychainSyncViewController>

 {
    PSKeychainSyncHeaderView *_headerView;
    PSSpecifier *_groupSpecifier;
}


@property (weak, nonatomic) NSObject<KeychainSyncViewControllerDelegate> *delegate; // ivar: _delegate


-(CGFloat)heightForHeaderInTableView:(id)arg0 ;
-(id)groupSpecifier;
-(id)headerView;
-(id)specifiers;
-(id)viewForHeaderInTableView:(id)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif