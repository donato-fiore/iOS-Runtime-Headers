// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYASSISTANTSUMMARYCONTENTVIEW_H
#define PXSHAREDLIBRARYASSISTANTSUMMARYCONTENTVIEW_H

@class UIView, UIImageView, UILabel, NSString;
@protocol PXChangeObserver;


#import "PXSharedLibraryAssistantViewModel.h"

@interface PXSharedLibraryAssistantSummaryContentView : UIView <PXChangeObserver>

 {
    UIImageView *_topImageView;
    UILabel *_countsLabel;
    UILabel *_peopleLabel;
    UILabel *_dateLabel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel; // ivar: _viewModel


-(id)initWithViewModel:(id)arg0 ;
-(void)_initializeSubviews;
-(void)_updateCountsLabel;
-(void)_updateDateLabel;
-(void)_updateIcon;
-(void)_updatePeopleLabel;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif