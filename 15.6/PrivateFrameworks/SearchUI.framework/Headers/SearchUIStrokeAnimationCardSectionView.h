// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUISTROKEANIMATIONCARDSECTIONVIEW_H
#define SEARCHUISTROKEANIMATIONCARDSECTIONVIEW_H

@class UIView<SAStrokeVisualResponse>, NSString;
@protocol SAStrokeAnimatingDelegate;


#import "SearchUICardSectionView.h"

@interface SearchUIStrokeAnimationCardSectionView : SearchUICardSectionView <SAStrokeAnimatingDelegate>



@property (readonly) UIView<SAStrokeVisualResponse> *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
-(id)setupContentView;
-(void)animationDidStart;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif