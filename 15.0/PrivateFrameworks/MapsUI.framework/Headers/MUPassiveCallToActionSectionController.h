// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPASSIVECALLTOACTIONSECTIONCONTROLLER_H
#define MUPASSIVECALLTOACTIONSECTIONCONTROLLER_H

@class MKUGCCallToActionViewAppearance;


#import "MUCallToActionSectionController.h"
#import "MUPlaceSectionView.h"

@interface MUPassiveCallToActionSectionController : MUCallToActionSectionController {
    MUPlaceSectionView *_sectionView;
    MKUGCCallToActionViewAppearance *_submissionStatus;
}




-(BOOL)hasContent;
-(id)sectionView;
-(id)submissionStatus;
-(void)_instrumentUserAction:(int)arg0 ;
-(void)_updateForSubmissionStatusChangeWithPreviousStatus:(id)arg0 ;
-(void)setSubmissionStatus:(id)arg0 ;


@end


#endif