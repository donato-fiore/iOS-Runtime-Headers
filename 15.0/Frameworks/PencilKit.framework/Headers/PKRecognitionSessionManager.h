// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKRECOGNITIONSESSIONMANAGER_H
#define PKRECOGNITIONSESSIONMANAGER_H

@class CHRecognitionSession, NSDate, NSArray, NSHashTable, NSSet, NSString;
@protocol CHRecognitionSessionDataSource, CHRecognitionSessionObserver, PKDataDetectorQueryDelegate, PKHashtagQueryDelegate, PKMentionQueryDelegate, OS_dispatch_queue, PKRecognitionSessionManagerDelegate;

#import <Foundation/Foundation.h>

#import "PKDrawing.h"
#import "PKRecognitionQueryController.h"

@interface PKRecognitionSessionManager : NSObject <CHRecognitionSessionDataSource, CHRecognitionSessionObserver, PKDataDetectorQueryDelegate, PKHashtagQueryDelegate, PKMentionQueryDelegate>

 {
    uint8_t _stateAtomic;
    NSObject<OS_dispatch_queue> *_recognitionSessionQueue;
    PKDrawing *_drawingForGetter;
    PKDrawing *q_drawing;
    CHRecognitionSession *q_session;
    NSDate *q_previousTime;
    NSArray *q_visibleOnscreenStrokes;
    BOOL q_wantsGrouping;
    BOOL q_wantsDataDetection;
    BOOL q_wantsHashtagDetection;
    BOOL q_wantsMentionDetection;
    BOOL q_wantsTranscription;
    PKRecognitionQueryController *q_queryController;
    NSHashTable *q_listeners;
    id<PKRecognitionSessionManagerDelegate> *_delegate;
    NSSet *_mentionSuffixes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger state;
@property (readonly) Class superclass;


+(id)enabledLocales;
-(id)init;
-(id)listeners;
-(id)strokeProviderSnapshot;
-(void)dataDetectorQuery:(id)arg0 foundItems:(id)arg1 ;
-(void)dealloc;
-(void)hashtagQuery:(id)arg0 foundItems:(id)arg1 ;
-(void)mentionQuery:(id)arg0 foundItems:(id)arg1 ;
-(void)recognitionSessionDidUpdateRecognitionResult:(id)arg0 ;
-(void)textInputDidChange:(id)arg0 ;


@end


#endif