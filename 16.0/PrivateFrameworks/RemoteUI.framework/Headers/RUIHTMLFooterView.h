// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RUIHTMLFOOTERVIEW_H
#define RUIHTMLFOOTERVIEW_H

@class UIView, NSURL, NSString;
@protocol RUIWebContainerViewDelegate, RemoteUITableFooter, RUITableFooterDelegate;


#import "RUIWebContainerView.h"

@interface RUIHTMLFooterView : UIView <RUIWebContainerViewDelegate, RemoteUITableFooter>

 {
    RUIWebContainerView *_webContainerView;
}


@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RUITableFooterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)footerHeightForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(CGFloat)footerHeightForWidth:(CGFloat)arg0 inView:(id)arg1 ;
-(id)initWithAttributes:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setText:(id)arg0 attributes:(id)arg1 ;
-(void)webContainerView:(id)arg0 didClickLinkWithURL:(id)arg1 ;


@end


#endif