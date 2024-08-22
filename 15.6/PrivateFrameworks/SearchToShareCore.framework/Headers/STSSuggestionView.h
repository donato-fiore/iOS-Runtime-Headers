// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSSUGGESTIONVIEW_H
#define STSSUGGESTIONVIEW_H

@class UIView, UITableView;
@protocol STSSuggestionViewDelegate;


#import "STSSuggestionFooter.h"

@interface STSSuggestionView : UIView {
    STSSuggestionFooter *_footerView;
}


@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (weak, nonatomic) NSObject<STSSuggestionViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGPoint footerOffset; // ivar: _footerOffset
@property (retain, nonatomic) UIView *overlayView; // ivar: _overlayView
@property (nonatomic, getter=isShowingFooter) BOOL showingFooter;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView


-(id)init;
-(struct CGSize )footerSize;
-(void)_handleLogoTap:(id)arg0 ;
-(void)_updateContentInsets;
-(void)_updateFooterOrigin;
-(void)layoutSubviews;
-(void)updateFooterImage:(id)arg0 ;


@end


#endif