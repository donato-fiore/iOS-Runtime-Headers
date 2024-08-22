// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STGROUPSPECIFIERPROVIDER_H
#define STGROUPSPECIFIERPROVIDER_H

@class NSString, UIViewController<STGroupSpecifierProviderDelegate>, PSSpecifier, NSMutableArray, NSArray;
@protocol UITableViewDelegate;

#import <Foundation/Foundation.h>


@interface STGroupSpecifierProvider : NSObject <UITableViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController<STGroupSpecifierProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PSSpecifier *groupSpecifier; // ivar: _groupSpecifier
@property (readonly) NSUInteger hash;
@property BOOL invalid; // ivar: _invalid
@property (nonatomic) BOOL isHidden; // ivar: _isHidden
@property (readonly) NSMutableArray *mutableSpecifiers;
@property (retain) NSMutableArray *privateSpecifiers; // ivar: _privateSpecifiers
@property (readonly, copy, nonatomic) NSArray *specifiers;
@property (readonly) Class superclass;


+(BOOL)automaticallyNotifiesObserversOfIsHidden;
-(id)init;
-(id)specifiersAtIndexes:(id)arg0 ;
-(void)_tableCellHeightDidChange:(id)arg0 ;
-(void)beginUpdates;
-(void)dealloc;
-(void)dismissViewControllerAnimated:(BOOL)arg0 ;
-(void)endUpdates;
-(void)insertSpecifiers:(id)arg0 atIndexes:(id)arg1 ;
-(void)lazyLoadBundle:(id)arg0 ;
-(void)popToViewControllerAnimated:(BOOL)arg0 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)reloadSectionHeaderFootersWithAnimation:(NSInteger)arg0 ;
-(void)reloadSpecifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)removeSpecifiersAtIndexes:(id)arg0 ;
-(void)replaceObjectInSpecifiersAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)replaceSpecifiersAtIndexes:(id)arg0 withSpecifiers:(id)arg1 ;
-(void)showConfirmationViewForSpecifier:(id)arg0 ;
-(void)showController:(id)arg0 animated:(BOOL)arg1 ;
-(void)showPINSheet:(id)arg0 completion:(id)arg1 ;
-(void)showStoreDemoAlert;


@end


#endif