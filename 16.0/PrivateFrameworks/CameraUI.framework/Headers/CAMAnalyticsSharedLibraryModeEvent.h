// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMANALYTICSSHAREDLIBRARYMODEEVENT_H
#define CAMANALYTICSSHAREDLIBRARYMODEEVENT_H



#import "CAMAnalyticsEvent.h"
#import "CAMLibrarySelectionController.h"

@interface CAMAnalyticsSharedLibraryModeEvent : CAMAnalyticsEvent {
    CAMLibrarySelectionController *_librarySelectionController;
}




-(id)eventName;
-(id)initWithLibrarySelectionController:(id)arg0 ;
-(void)publish;


@end


#endif