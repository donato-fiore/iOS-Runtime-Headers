// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIINFOCARDSECTIONVIEW_H
#define SEARCHUIINFOCARDSECTIONVIEW_H

@class NUIContainerGridView, NSString, NSMutableArray, SFInfoCardSection;
@protocol NUIContainerViewDelegate, SearchUIInfoSizingDelegate;


#import "SearchUICardSectionView.h"

@interface SearchUIInfoCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, SearchUIInfoSizingDelegate>



@property (retain, nonatomic) NUIContainerGridView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *infoValueControllers; // ivar: _infoValueControllers
@property (retain, nonatomic) NSMutableArray *labels; // ivar: _labels
@property (retain, nonatomic) SFInfoCardSection *section;
@property (readonly) Class superclass;


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
-(BOOL)containerView:(id)arg0 shouldRestartMeasurementDueToCompressionInAxis:(NSInteger)arg1 forReason:(NSInteger)arg2 ;
-(id)setupContentView;
-(struct CGSize )containerView:(id)arg0 systemLayoutSizeFittingSize:(struct CGSize )arg1 forArrangedSubview:(id)arg2 ;
-(struct UIEdgeInsets )layoutMargins;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif