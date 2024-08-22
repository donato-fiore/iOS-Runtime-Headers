// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLALERTSYSTEMSOUNDSTOPTASKSDESCRIPTOR_H
#define TLALERTSYSTEMSOUNDSTOPTASKSDESCRIPTOR_H

@class NSMapTable, NSArray;

#import <Foundation/Foundation.h>


@interface TLAlertSystemSoundStopTasksDescriptor : NSObject

@property (retain, nonatomic) NSMapTable *interruptedAlertsToSound; // ivar: _interruptedAlertsToSound
@property (copy, nonatomic) NSArray *playbackCompletionContextsToProcess; // ivar: _playbackCompletionContextsToProcess




@end


#endif