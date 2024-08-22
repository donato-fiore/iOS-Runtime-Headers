// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NOTESBACKGROUNDVIEW_H
#define NOTESBACKGROUNDVIEW_H

@class UIView, NSLayoutConstraint, NSString;
@protocol ICAccessibilityChildReparentingTarget, ICAccessibilityChildReparentingController, ICAccessibilityChildReparentingProvider;


#import "NotesBarBackgroundView.h"

@interface NotesBackgroundView : UIView <ICAccessibilityChildReparentingTarget>



@property (weak, nonatomic) NSObject<ICAccessibilityChildReparentingController> *axChildReparentingController; // ivar: _axChildReparentingController
@property (retain, nonatomic) NotesBarBackgroundView *bottomBarView; // ivar: _bottomBarView
@property (retain, nonatomic) NotesBarBackgroundView *bottomSafeAreaBarView; // ivar: _bottomSafeAreaBarView
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // ivar: _contentViewBottomConstraint
@property (nonatomic, getter=isContentViewVisible) BOOL contentViewVisible; // ivar: _contentViewVisible
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<ICAccessibilityChildReparentingProvider> *elementForAccessibilityReparenting; // ivar: _elementForAccessibilityReparenting
@property (nonatomic) BOOL hasBarBlur; // ivar: _hasBarBlur
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (readonly) Class superclass;
@property (retain, nonatomic) NotesBarBackgroundView *topBarView; // ivar: _topBarView


-(BOOL)_accessibilityIsScannerGroup;
-(id)accessibilityElements;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)scrollViewDescendantOfView:(id)arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_setOverrideUserInterfaceStyle:(NSInteger)arg0 ;
-(void)addConstraintsForSafeAreaLayoutGuide:(id)arg0 bottomToolbar:(id)arg1 toContainer:(id)arg2 ;
-(void)addConstraintsForSafeAreaLayoutGuide:(id)arg0 toContainer:(id)arg1 ;
-(void)addSubview:(id)arg0 ;
-(void)addSubviewAboveAllViews:(id)arg0 ;
-(void)commonInit;
-(void)fadeInBottomToolbarInNavigationController:(id)arg0 duration:(CGFloat)arg1 ;
-(void)fadeOutBottomToolbarInNavigationController:(id)arg0 duration:(CGFloat)arg1 ;
-(void)reparentAccessibilityChildrenOfElement:(id)arg0 ;
-(void)scrollView:(id)arg0 didChangeContentOffset:(struct CGPoint )arg1 ;
-(void)snapshotContentIntoSnapshotView:(id)arg0 ;
-(void)updateConstraintsForBottomToolbar:(id)arg0 ;


@end


#endif