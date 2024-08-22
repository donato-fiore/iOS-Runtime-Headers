// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOCTAGSCOLLECTIONITEMCONTENTVIEW_H
#define DOCTAGSCOLLECTIONITEMCONTENTVIEW_H

@class UIView, NSString, UIFont, NSArray, UILabel, DOCTag;
@protocol DOCTagsCollectionCellMenuTarget, DOCTagsCollectionItemContentViewDelegate;



@interface DOCTagsCollectionItemContentView : UIView <DOCTagsCollectionCellMenuTarget>



@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DOCTagsCollectionItemContentViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFont *font;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maxWidth; // ivar: _maxWidth
@property (readonly, nonatomic) NSArray *menuItemsForCalloutBarPresentation;
@property (readonly, nonatomic) NSArray *menuItemsForContextMenuPresentation;
@property (readonly, nonatomic) id *menuPresentationIdentity;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *tagNameLabel; // ivar: _tagNameLabel
@property (copy, nonatomic) DOCTag *tagValue; // ivar: _tagValue


-(BOOL)canPerformCalloutBarAction:(SEL)arg0 ;
-(CGFloat)_contentHorizontalInset;
-(CGFloat)_tagToTitleSpacing;
-(CGFloat)tagLayoutWidth;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForLastBaselineLayout;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)removeTag:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAttributedString;
-(void)updateColors;


@end


#endif