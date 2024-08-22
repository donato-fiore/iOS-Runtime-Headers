// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STCONTENTPRIVACYSTOREDETAILCONTROLLER_H
#define STCONTENTPRIVACYSTOREDETAILCONTROLLER_H



#import "STPINListViewController.h"
#import "STContentPrivacyListController.h"

@interface STContentPrivacyStoreDetailController : STPINListViewController

@property (weak) STContentPrivacyListController *contentPrivacyController; // ivar: _contentPrivacyController


-(id)init;
-(id)specifiers;
-(void)_isLoadedDidChange:(BOOL)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setCoordinator:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif