// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPASSIVECALLTOACTIONSECTIONCONTROLLER_H
#define MUPASSIVECALLTOACTIONSECTIONCONTROLLER_H

@class UIView, MKUGCCallToActionViewAppearance;


#import "MUCallToActionSectionController.h"
#import "MUPlaceSectionView.h"
#import "MUCallToActionItemCellModel.h"

@interface MUPassiveCallToActionSectionController : MUCallToActionSectionController {
    MUPlaceSectionView *_sectionView;
    MUCallToActionItemCellModel *_addPhotoModel;
    MUCallToActionItemCellModel *_ratingsModel;
    UIView *_suggestionView;
    MKUGCCallToActionViewAppearance *_submissionStatus;
}




-(BOOL)hasContent;
-(BOOL)isImpressionable;
-(id)sectionView;
-(id)submissionStatus;
-(int)analyticsModuleType;
-(void)_handlePhotoItemTapWithPresentationOptions:(id)arg0 ;
-(void)_handlePhotoItemTapWithPresentationOptions:(id)arg0 entryPoint:(NSInteger)arg1 ;
-(void)_handleRatingItemTapWithPresentationOptions:(id)arg0 ;
-(void)_handleViewCurrentSubmissionTapWithPresentationOptions:(id)arg0 ;
-(void)_instrumentUserAction:(int)arg0 ;
-(void)_loadContentIfNeeded;
-(void)_unloadContent;
-(void)_updateForSubmissionStatusChangeWithPreviousStatus:(id)arg0 ;
-(void)setSubmissionStatus:(id)arg0 ;
-(void)updateSuggestionView;


@end


#endif