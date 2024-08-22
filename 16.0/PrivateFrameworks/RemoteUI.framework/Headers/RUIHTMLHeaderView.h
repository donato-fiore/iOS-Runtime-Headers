// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RUIHTMLHEADERVIEW_H
#define RUIHTMLHEADERVIEW_H

@class UIView, NSURL, NSString;
@protocol RUIWebContainerViewDelegate, RUIHeader, RUIHeaderDelegate;


#import "RUIWebContainerView.h"

@interface RUIHTMLHeaderView : UIView <RUIWebContainerViewDelegate, RUIHeader>

 {
    RUIWebContainerView *_webContainerView;
    BOOL _isFirstSection;
}


@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RUIHeaderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)headerHeightForWidth:(CGFloat)arg0 inView:(id)arg1 ;
-(CGFloat)webViewWidth;
-(id)initWithAttributes:(id)arg0 ;
-(id)quoteEncodedStringWithString:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setFooterStyleText:(id)arg0 attributes:(id)arg1 ;
-(void)setHTMLContent:(id)arg0 toElementsMatchingQuery:(id)arg1 ;
-(void)setSectionIsFirst:(BOOL)arg0 ;
-(void)setText:(id)arg0 attributes:(id)arg1 ;
-(void)webContainerView:(id)arg0 didClickLinkWithURL:(id)arg1 ;
-(void)webContainerViewContentDidChange:(id)arg0 ;


@end


#endif