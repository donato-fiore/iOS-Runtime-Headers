// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLKDETAILSVIEW_H
#define TLKDETAILSVIEW_H

@class UIView, NSString, NSArray;
@protocol TLKTextAreaViewDelegate, TLKDetailsViewDelegate;


#import "TLKView.h"
#import "TLKRichText.h"
#import "TLKTextAreaView.h"
#import "TLKImage.h"

@interface TLKDetailsView : TLKView <TLKTextAreaViewDelegate>



@property (retain, nonatomic) UIView *accessoryView;
@property (retain, nonatomic) TLKRichText *bannerBadge;
@property (retain, nonatomic) TLKTextAreaView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TLKDetailsViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *details;
@property (retain, nonatomic) TLKRichText *footnote;
@property (retain, nonatomic) NSString *footnoteButtonText;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAccessoryViewBottomAligned;
@property (retain, nonatomic) TLKRichText *secondaryTitle;
@property (retain, nonatomic) TLKImage *secondaryTitleImage;
@property (nonatomic) BOOL secondaryTitleIsDetached;
@property (readonly) Class superclass;
@property (retain, nonatomic) TLKRichText *title;
@property (nonatomic) BOOL truncateTitleMiddle;
@property (nonatomic) BOOL useCompactMode;


-(id)setupContentView;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)layoutMarginsDidChange;
-(void)performBatchUpdates:(id)arg0 ;


@end


#endif