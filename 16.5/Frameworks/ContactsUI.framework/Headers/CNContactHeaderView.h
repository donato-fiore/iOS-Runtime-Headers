// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTHEADERVIEW_H
#define CNCONTACTHEADERVIEW_H

@class UIView, NSArray, NSString, UILabel, NSDictionary, NSLayoutConstraint;
@protocol CNContactPhotoViewDelegate, CNUIReusableView, CNContactHeaderViewDelegate, CNPresenterDelegate;


#import "CNContactPhotoView.h"
#import "CNContactHeaderViewSizeAttributes.h"

@interface CNContactHeaderView : UIView <CNContactPhotoViewDelegate, CNUIReusableView>

 {
    BOOL _needsReload;
}


@property (retain, nonatomic) NSArray *activatedConstraints; // ivar: _activatedConstraints
@property (nonatomic) BOOL alwaysShowsMonogram; // ivar: _alwaysShowsMonogram
@property (nonatomic) CGFloat constrainedMaxHeight; // ivar: _constrainedMaxHeight
@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactHeaderViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lastViewWidth; // ivar: _lastViewWidth
@property (readonly, nonatomic) CGFloat maxHeight;
@property (readonly, nonatomic) CGFloat minHeight;
@property (readonly, nonatomic) CGFloat minTitleOffset;
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (copy, nonatomic) NSDictionary *nameTextAttributes; // ivar: _nameTextAttributes
@property (nonatomic) BOOL needsLabelSizeCalculation; // ivar: _needsLabelSizeCalculation
@property (retain) NSLayoutConstraint *photoHeightConstraint; // ivar: _photoHeightConstraint
@property (retain) NSLayoutConstraint *photoTopConstraint; // ivar: _photoTopConstraint
@property (readonly, nonatomic) CNContactPhotoView *photoView; // ivar: _photoView
@property (weak, nonatomic) NSObject<CNPresenterDelegate> *presenterDelegate; // ivar: _presenterDelegate
@property (nonatomic) BOOL shouldShowBelowNavigationTitle; // ivar: _shouldShowBelowNavigationTitle
@property (nonatomic) BOOL shouldUseConstrainedMaxHeight; // ivar: _shouldUseConstrainedMaxHeight
@property (nonatomic) BOOL showMonogramsOnly; // ivar: _showMonogramsOnly
@property (retain, nonatomic) CNContactHeaderViewSizeAttributes *sizeAttributes; // ivar: _sizeAttributes
@property (readonly) Class superclass;
@property (nonatomic) BOOL visibleToScrollViews; // ivar: _visibleToScrollViews


+(BOOL)requiresConstraintBasedLayout;
+(id)descriptorForRequiredKeys;
+(id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(BOOL)arg0 ;
+(id)makePhotoViewWithShouldAllowTakePhotoAction:(BOOL)arg0 shouldAllowImageDrops:(BOOL)arg1 monogramOnly:(BOOL)arg2 ;
+(id)sizeAttributesShowingNavBar:(BOOL)arg0 ;
+(struct CGSize )defaultPhotoSize;
-(BOOL)canBecomeFirstResponder;
-(CGFloat)currentHeightPercentMaximized;
-(CGFloat)currentHeightPercentMaximizedForMaxHeight:(CGFloat)arg0 ;
-(CGFloat)currentHeightPercentMaximizedForPhoto;
-(CGFloat)defaultMaxBaseHeight;
-(CGFloat)defaultMaxHeight;
-(CGFloat)safeAreaPhotoOffset;
-(CGFloat)safeAreaTop;
-(id)contactStyle;
-(id)contactViewCache;
-(id)descriptorForRequiredKeys;
-(id)initWithContact:(id)arg0 frame:(struct CGRect )arg1 shouldAllowTakePhotoAction:(BOOL)arg2 shouldAllowImageDrops:(BOOL)arg3 showingNavBar:(BOOL)arg4 monogramOnly:(BOOL)arg5 delegate:(id)arg6 ;
-(id)viewControllerForPhotoView:(id)arg0 ;
-(void)calculateLabelSizesIfNeeded;
-(void)dealloc;
-(void)didFinishUsing;
-(void)layoutSubviews;
-(void)photoView:(id)arg0 didAcceptDropOfImageData:(id)arg1 ;
-(void)photoViewDidUpdate:(id)arg0 ;
-(void)prepareForReuse;
-(void)reloadDataIfNeeded;
-(void)reloadDataPreservingChanges:(BOOL)arg0 ;
-(void)setNeedsReload;
-(void)updateConstraints;
-(void)updateFontSizes;
-(void)updateForShowingNavBar:(BOOL)arg0 ;
-(void)updateSizeDependentAttributes;
-(void)updateWithContacts:(id)arg0 ;
-(void)updateWithNewContact:(id)arg0 ;


@end


#endif