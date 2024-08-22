// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXANCHORMODELINFERENCETRACKER_H
#define ATXANCHORMODELINFERENCETRACKER_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface ATXAnchorModelInferenceTracker : NSObject {
    NSUserDefaults *_defaults;
}




-(id)fetchPersistedInferenceEvents;
-(id)inferenceEventsToTryAgain;
-(id)init;
-(void)clearAllIncompleteInferenceEvents;
-(void)persistInferenceEvent:(id)arg0 ;
-(void)trackInferenceFailedForInferenceEvent:(id)arg0 ;
-(void)trackInferenceFinishedForInferenceEvent:(id)arg0 ;
-(void)trackInferenceStartedForInferenceEvent:(id)arg0 ;


@end


#endif