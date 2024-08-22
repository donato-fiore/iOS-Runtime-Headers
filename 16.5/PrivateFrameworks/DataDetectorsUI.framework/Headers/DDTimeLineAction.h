// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDTIMELINEACTION_H
#define DDTIMELINEACTION_H

@class NSDate;


#import "DDRemoteAction.h"

@interface DDTimeLineAction : DDRemoteAction {
    NSDate *_startDate;
}




+(id)viewControllerProviderClass;
-(id)commitURL;
-(id)menuActionClasses;
-(id)platterTitle;
-(id)previewActions;
-(id)startDate;
-(struct CGSize )suggestedContentSize;


@end


#endif