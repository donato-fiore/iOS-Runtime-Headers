// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMATTERCONNECTEDSERVICESVIEWCONTROLLER_H
#define HUMATTERCONNECTEDSERVICESVIEWCONTROLLER_H

@class NSString;
@protocol HUPresentationDelegate, HUTitleButtonDescriptionCellDelegate, UITextViewDelegate, HUMatterConnectedServicesViewControllerDelegate;


#import "HUItemTableViewController.h"
#import "HUMatterConnectedServicesItemManager.h"

@interface HUMatterConnectedServicesViewController : HUItemTableViewController <HUPresentationDelegate, HUTitleButtonDescriptionCellDelegate, UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUMatterConnectedServicesViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUMatterConnectedServicesItemManager *itemManager;
@property (readonly) Class superclass;


-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)finishPresentation:(id)arg0 animated:(BOOL)arg1 ;
-(id)initWithConnectedServicesItemProvider:(id)arg0 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_presentHomeConnectedEcosystemDetailViewController:(id)arg0 ;
-(void)_presentRemoveFromEcosystemConfirmation:(id)arg0 atIndexPath:(id)arg1 ;
-(void)buttonTappedForCell:(id)arg0 withItem:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif