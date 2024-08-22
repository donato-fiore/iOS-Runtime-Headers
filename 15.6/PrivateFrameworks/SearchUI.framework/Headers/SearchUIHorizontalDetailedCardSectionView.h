// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIHORIZONTALDETAILEDCARDSECTIONVIEW_H
#define SEARCHUIHORIZONTALDETAILEDCARDSECTIONVIEW_H

@class NSString;
@protocol SearchUIDetailedViewDelegate;


#import "SearchUICardSectionView.h"
#import "SearchUIDetailedView.h"
#import "SearchUIDetailedRowModel.h"

@interface SearchUIHorizontalDetailedCardSectionView : SearchUICardSectionView <SearchUIDetailedViewDelegate>



@property (retain, nonatomic) SearchUIDetailedView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SearchUIDetailedRowModel *rowModel;
@property (readonly) Class superclass;


+(BOOL)supportsCustomUserReportRequestAfforance;
+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
-(id)setupContentView;
-(void)footnoteButtonPressed;
-(void)setFeedbackDelegate:(id)arg0 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif