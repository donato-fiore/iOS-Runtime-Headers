// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUSEARCHRECENTSEARCHESGADGET_H
#define PUSEARCHRECENTSEARCHESGADGET_H

@class UITableViewController, NSString, PXGadgetSpec, NSArray, NSLayoutConstraint;
@protocol PXGadget, PXGadgetDelegate;



@interface PUSearchRecentSearchesGadget : UITableViewController <PXGadget>



@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType; // ivar: _accessoryButtonType
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) NSInteger priority;
@property (copy, nonatomic) NSArray *recentSearches; // ivar: _recentSearches
@property (retain, nonatomic) NSLayoutConstraint *separatorCompactWidthConstraint; // ivar: _separatorCompactWidthConstraint
@property (retain, nonatomic) NSLayoutConstraint *separatorRegularTrailingConstraint; // ivar: _separatorRegularTrailingConstraint
@property (readonly) Class superclass;
@property (nonatomic) CGRect visibleContentRect;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)contentViewController;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct CGSize )contentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_reloadData;
-(void)_updateTableViewLayoutMargins;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)resetLineSeparatorInsets;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)userDidSelectAccessoryButton:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewLayoutMarginsDidChange;


@end


#endif