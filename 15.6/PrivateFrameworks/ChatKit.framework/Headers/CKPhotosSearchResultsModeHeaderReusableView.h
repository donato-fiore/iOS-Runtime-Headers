// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKPHOTOSSEARCHRESULTSMODEHEADERREUSABLEVIEW_H
#define CKPHOTOSSEARCHRESULTSMODEHEADERREUSABLEVIEW_H

@class UICollectionReusableView, UISegmentedControl, NSString;
@protocol CKSearchResultSupplementryCell;



@interface CKPhotosSearchResultsModeHeaderReusableView : UICollectionReusableView <CKSearchResultSupplementryCell>



@property (nonatomic) CGFloat bottomPadding; // ivar: _bottomPadding
@property (retain, nonatomic) UISegmentedControl *control; // ivar: _control
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets marginInsets; // ivar: marginInsets
@property (readonly) Class superclass;


+(CGFloat)desiredZPosition;
+(id)reuseIdentifier;
+(id)supplementaryViewType;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)_controlIndexDidChange:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif