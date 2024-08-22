// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKFOOTERHYPERLINKCELL_H
#define PKFOOTERHYPERLINKCELL_H

@class UICollectionViewListCell, UIColor, NSArray, NSString;


#import "PKMultiHyperlinkView.h"

@interface PKFooterHyperlinkCell : UICollectionViewListCell {
    PKMultiHyperlinkView *_hyperLinkView;
}


@property (nonatomic) NSDirectionalEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (retain, nonatomic) UIColor *linkTextColor; // ivar: _linkTextColor
@property (copy, nonatomic) NSArray *sources; // ivar: _sources
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_commonInit;
-(void)_configureHyperlinkViewIfNecessary;
-(void)layoutSubviews;


@end


#endif