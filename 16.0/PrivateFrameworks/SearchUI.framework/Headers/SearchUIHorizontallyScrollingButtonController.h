// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIHORIZONTALLYSCROLLINGBUTTONCONTROLLER_H
#define SEARCHUIHORIZONTALLYSCROLLINGBUTTONCONTROLLER_H

@class UIButton, UIView;
@protocol SearchUIFeedbackDelegate;

#import <Foundation/Foundation.h>

#import "SearchUICardSectionRowModel.h"
#import "SearchUIImageView.h"

@interface SearchUIHorizontallyScrollingButtonController : NSObject

@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (retain, nonatomic) SearchUICardSectionRowModel *cardSectionRowModel; // ivar: _cardSectionRowModel
@property (weak, nonatomic) NSObject<SearchUIFeedbackDelegate> *feedbackDelegate; // ivar: _feedbackDelegate
@property (nonatomic) BOOL scrollsWithoutStoppingAtBoundaries; // ivar: _scrollsWithoutStoppingAtBoundaries
@property (nonatomic) CGFloat spacing; // ivar: _spacing
@property (retain, nonatomic) SearchUIImageView *thumbnailView; // ivar: _thumbnailView
@property (retain, nonatomic) UIView *view; // ivar: _view
@property (nonatomic) BOOL wantsSeparators; // ivar: _wantsSeparators
@property (nonatomic) CGFloat width; // ivar: _width




@end


#endif