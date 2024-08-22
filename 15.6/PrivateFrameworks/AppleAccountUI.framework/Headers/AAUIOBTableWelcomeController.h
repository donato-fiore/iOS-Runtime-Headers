// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUIOBTABLEWELCOMECONTROLLER_H
#define AAUIOBTABLEWELCOMECONTROLLER_H

@class OBTableWelcomeController, UIView, OBTrayButton;
@protocol AAUIOBTableWelcomeControllerViewModelProtocol, AAUIOBTableWelcomeControllerDelegate;



@interface AAUIOBTableWelcomeController : OBTableWelcomeController {
    id<AAUIOBTableWelcomeControllerViewModelProtocol> *_viewModel;
    UIView *_helpLinkFooterView;
}


@property (weak, nonatomic) NSObject<AAUIOBTableWelcomeControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) OBTrayButton *primaryButton; // ivar: _primaryButton
@property (retain, nonatomic) OBTrayButton *secondaryButton; // ivar: _secondaryButton


-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(id)_helpLinkFooterView;
-(id)initWithViewModel:(id)arg0 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_addPrimaryButtonWithViewModel:(id)arg0 ;
-(void)_addSecondaryButtonWithViewModel:(id)arg0 ;
-(void)_addSecondaryViewWithViewModel:(id)arg0 ;
-(void)_openHelpLink;
-(void)_setupTableViewWithViewModel:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif