// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIDESCRIPTIONCARDSECTIONVIEW_H
#define SEARCHUIDESCRIPTIONCARDSECTIONVIEW_H

@class TLKDescriptionView, NSString;
@protocol TLKDescriptionViewDelegate;


#import "SearchUICardSectionView.h"

@interface SearchUIDescriptionCardSectionView : SearchUICardSectionView <TLKDescriptionViewDelegate>



@property (retain, nonatomic) TLKDescriptionView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL expanded; // ivar: _expanded
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsCustomUserReportRequestAfforance;
+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
+(id)dragSubtitleForCardSection:(id)arg0 ;
+(id)dragTitleForCardSection:(id)arg0 ;
-(id)setupContentView;
-(void)didPressFootnoteButton;
-(void)didPressMoreButton;
-(void)didPressTrailingFootnoteButton;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif