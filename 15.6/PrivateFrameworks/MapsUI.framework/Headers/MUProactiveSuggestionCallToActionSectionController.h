// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUPROACTIVESUGGESTIONCALLTOACTIONSECTIONCONTROLLER_H
#define MUPROACTIVESUGGESTIONCALLTOACTIONSECTIONCONTROLLER_H

@class MKUGCCallToActionViewAppearance;


#import "MUCallToActionSectionController.h"
#import "MUPlaceSectionView.h"
#import "MUButtonCellRowView.h"
#import "MUCallToActionItemCellModel.h"

@interface MUProactiveSuggestionCallToActionSectionController : MUCallToActionSectionController {
    NSInteger _expectedCallToActionType;
    MUPlaceSectionView *_sectionView;
    MUButtonCellRowView *_buttonCellRowView;
    MUCallToActionItemCellModel *_proactiveViewModel;
    MKUGCCallToActionViewAppearance *_submissionStatus;
}


@property (retain, nonatomic) MKUGCCallToActionViewAppearance *proactiveCallToActionAppearance; // ivar: _proactiveCallToActionAppearance


-(BOOL)hasContent;
-(id)initWithMapItem:(id)arg0 expectedCallToActionType:(NSInteger)arg1 ;
-(id)sectionView;
-(id)submissionStatus;
-(int)analyticsModuleType;
-(void)_updateAvailabilityWithPreviousState:(BOOL)arg0 ;
-(void)setSubmissionStatus:(id)arg0 ;


@end


#endif