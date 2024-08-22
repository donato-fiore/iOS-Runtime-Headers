// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSELECTIONVIEWCONTROLLER_H
#define CKSELECTIONVIEWCONTROLLER_H

@class UIViewController;
@protocol CKSelectionViewControllerDelegate;



@interface CKSelectionViewController : UIViewController

@property (weak, nonatomic) NSObject<CKSelectionViewControllerDelegate> *delegate; // ivar: _delegate


-(id)_defaultConfigurationWithSelectionCount:(NSInteger)arg0 ;
-(id)_deleteAction;
-(id)_deleteAllAction;
-(id)_junkFilteringConfigurationWithSelectionCount:(NSInteger)arg0 secondaryText:(id)arg1 ;
-(id)_recentlyDeletedConfigurationWithSelectionCount:(NSInteger)arg0 secondaryText:(id)arg1 ;
-(id)_recoverAction;
-(void)_updateContentUnavailableConfigurationUsingState:(id)arg0 ;
-(void)_updatePropertiesAsDeleteAllButton:(id)arg0 ;
-(void)_updatePropertiesAsDeleteButton:(id)arg0 ;
-(void)_updatePropertiesAsDestructiveButton:(id)arg0 buttonText:(id)arg1 ;
-(void)_updatePropertiesAsRecoverButton:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif