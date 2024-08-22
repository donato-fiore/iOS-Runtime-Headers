// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFVARIABLESVIEWCONTROLLER_H
#define WFVARIABLESVIEWCONTROLLER_H

@class UIViewController, NSMutableDictionary, UICollectionView, UICollectionViewFlowLayout, NSString, NSArray;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, WFVariablesViewControllerDelegate, WFVariableProvider;



@interface WFVariablesViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>



@property (readonly, nonatomic) NSMutableDictionary *cellWidthCache; // ivar: _cellWidthCache
@property (weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (weak, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // ivar: _collectionViewLayout
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFVariablesViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger scrollDirection; // ivar: _scrollDirection
@property (nonatomic) BOOL showsMagicVariableButton; // ivar: _showsMagicVariableButton
@property (nonatomic) BOOL showsUserDefinedVariables; // ivar: _showsUserDefinedVariables
@property (copy, nonatomic) NSArray *specialVariables; // ivar: _specialVariables
@property (copy, nonatomic) NSArray *suggestedVariables; // ivar: _suggestedVariables
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *userDefinedVariableNames; // ivar: _userDefinedVariableNames
@property (weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)availableUserDefinedVariableNames;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithScrollDirection:(NSInteger)arg0 ;
-(id)variableAtIndexPath:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)loadView;
-(void)magicVariableButtonPressed:(id)arg0 ;
-(void)reloadData;


@end


#endif