// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFVARIABLESHORTCUTSBAR_H
#define WFVARIABLESHORTCUTSBAR_H

@class UIView, NSMutableDictionary, UICollectionView, NSString, UIButton, CAGradientLayer, NSArray, WFVariableShortcutsBarButtonCell;
@protocol UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WFVariableShortcutsBarDelegate, WFVariableProvider;



@interface WFVariableShortcutsBar : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>



@property (readonly, nonatomic) NSMutableDictionary *cellWidthCache; // ivar: _cellWidthCache
@property (weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (copy, nonatomic) NSString *customButtonTitle; // ivar: _customButtonTitle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFVariableShortcutsBarDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UIButton *doneButton; // ivar: _doneButton
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) CAGradientLayer *maskLayer; // ivar: _maskLayer
@property (weak, nonatomic) UIView *maskingView; // ivar: _maskingView
@property (nonatomic) BOOL showsDoneButton; // ivar: _showsDoneButton
@property (nonatomic) BOOL showsMagicVariableButton; // ivar: _showsMagicVariableButton
@property (nonatomic) BOOL showsUserDefinedVariables; // ivar: _showsUserDefinedVariables
@property (nonatomic) BOOL showsVariables; // ivar: _showsVariables
@property (copy, nonatomic) NSArray *specialVariables; // ivar: _specialVariables
@property (copy, nonatomic) NSArray *suggestedVariables; // ivar: _suggestedVariables
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *userDefinedVariableNames; // ivar: _userDefinedVariableNames
@property (weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (retain, nonatomic) WFVariableShortcutsBarButtonCell *variablesButton; // ivar: _variablesButton
@property (nonatomic) BOOL variablesButtonSelected; // ivar: _variablesButtonSelected


-(BOOL)shouldShowCustomButton;
-(BOOL)shouldShowVariablesButton;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)barButtonPressed:(id)arg0 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif