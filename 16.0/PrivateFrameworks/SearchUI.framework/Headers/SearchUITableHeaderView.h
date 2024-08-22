// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUITABLEHEADERVIEW_H
#define SEARCHUITABLEHEADERVIEW_H

@class NSString;
@protocol NUIContainerViewDelegate;


#import "SearchUITableHeaderViewShared.h"
#import "SearchUILabel.h"

@interface SearchUITableHeaderView : SearchUITableHeaderViewShared <NUIContainerViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldUseInsetRoundedSections; // ivar: _shouldUseInsetRoundedSections
@property (retain, nonatomic) SearchUILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (readonly) NSString *title;
@property (retain, nonatomic) SearchUILabel *titleLabel; // ivar: _titleLabel


+(id)reuseIdentifier;
-(BOOL)isSuggestedAppsHeader;
-(id)init;
-(void)layoutSubviews;
-(void)setCardSection:(id)arg0 ;
-(void)updateWithSection:(id)arg0 isExpanded:(BOOL)arg1 usesInsetRoundedSection:(BOOL)arg2 ;


@end


#endif