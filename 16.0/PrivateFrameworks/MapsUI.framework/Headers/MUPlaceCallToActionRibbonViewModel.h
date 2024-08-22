// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLACECALLTOACTIONRIBBONVIEWMODEL_H
#define MUPLACECALLTOACTIONRIBBONVIEWMODEL_H

@class MKUGCCallToActionViewAppearance;


#import "MUPlaceRibbonItemViewModel.h"

@interface MUPlaceCallToActionRibbonViewModel : MUPlaceRibbonItemViewModel {
    MUPlaceRibbonItemViewModel *_callToActionViewModel;
}


@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus; // ivar: _submissionStatus


-(BOOL)isTappable;
-(id)initWithSubmissionStatus:(id)arg0 ;
-(id)titleStringProvider:(SEL)arg0 ;
-(id)valueStringProvider:(SEL)arg0 ;
-(void)_updateInternalState;


@end


#endif