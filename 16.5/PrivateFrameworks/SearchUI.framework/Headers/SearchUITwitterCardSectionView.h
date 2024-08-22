// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUITWITTERCARDSECTIONVIEW_H
#define SEARCHUITWITTERCARDSECTIONVIEW_H

@class TLKStackView, NSString;
@protocol NUIContainerViewDelegate;


#import "SearchUICardSectionView.h"
#import "SearchUIImageView.h"

@interface SearchUITwitterCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate>



@property (retain, nonatomic) TLKStackView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SearchUIImageView *pictureView; // ivar: _pictureView
@property (readonly) Class superclass;


-(id)initWithRowModel:(id)arg0 feedbackDelegate:(id)arg1 ;
-(id)setupContentView;
-(void)containerView:(id)arg0 willMeasureArrangedSubviewsFittingSize:(struct CGSize )arg1 forReason:(NSInteger)arg2 ;


@end


#endif