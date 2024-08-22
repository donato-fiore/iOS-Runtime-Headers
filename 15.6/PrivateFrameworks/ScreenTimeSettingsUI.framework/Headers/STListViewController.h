// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STLISTVIEWCONTROLLER_H
#define STLISTVIEWCONTROLLER_H

@class PSListController, NSMutableDictionary, NSString, NSArray;
@protocol STGroupSpecifierProviderDelegate;



@interface STListViewController : PSListController <STGroupSpecifierProviderDelegate>



@property (retain, nonatomic) NSMutableDictionary *cellHeightBySpecifierIdentifier; // ivar: _cellHeightBySpecifierIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *specifierProviders; // ivar: _specifierProviders
@property (readonly) Class superclass;


-(BOOL)shouldReloadSpecifiersOnResume;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(id)init;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)visibleSpecifierProviders;
-(void)addObserversForSpecifierProvider:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeObserversForSpecifierProvider:(id)arg0 ;
-(void)specifierProvider:(id)arg0 dismissViewControllerAnimated:(BOOL)arg1 ;
-(void)specifierProvider:(id)arg0 lazyLoadBundle:(id)arg1 ;
-(void)specifierProvider:(id)arg0 popToViewControllerAnimated:(BOOL)arg1 ;
-(void)specifierProvider:(id)arg0 presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)specifierProvider:(id)arg0 presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)specifierProvider:(id)arg0 reloadSectionHeaderFootersWithAnimation:(NSInteger)arg1 ;
-(void)specifierProvider:(id)arg0 reloadSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)specifierProvider:(id)arg0 showConfirmationViewForSpecifier:(id)arg1 ;
-(void)specifierProvider:(id)arg0 showController:(id)arg1 animated:(BOOL)arg2 ;
-(void)specifierProvider:(id)arg0 showPINSheet:(id)arg1 ;
-(void)specifierProviderBeginUpdates:(id)arg0 ;
-(void)specifierProviderEndUpdates:(id)arg0 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;


@end


#endif