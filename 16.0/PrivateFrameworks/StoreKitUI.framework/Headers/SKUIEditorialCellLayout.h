// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIEDITORIALCELLLAYOUT_H
#define SKUIEDITORIALCELLLAYOUT_H

@class NSString;
@protocol SKUIEditorialLinkViewDelegate;


#import "SKUICellLayout.h"
#import "SKUIEditorialLinkView.h"
#import "SKUITextBoxView.h"

@interface SKUIEditorialCellLayout : SKUICellLayout <SKUIEditorialLinkViewDelegate>

 {
    CGFloat _linkSpacing;
    SKUIEditorialLinkView *_linkView;
    SKUITextBoxView *_textBoxView;
    CGFloat _totalHeight;
}


@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SKUITextBoxView *textBoxView;


-(id)_linkView;
-(id)initWithCollectionViewCell:(id)arg0 ;
-(id)initWithParentView:(id)arg0 ;
-(void)_initContentInset;
-(void)applyEditorialLayout:(id)arg0 withOrientation:(NSInteger)arg1 expanded:(BOOL)arg2 ;
-(void)dealloc;
-(void)editorialLinkView:(id)arg0 didSelectLink:(id)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setColoringWithColorScheme:(id)arg0 ;


@end


#endif