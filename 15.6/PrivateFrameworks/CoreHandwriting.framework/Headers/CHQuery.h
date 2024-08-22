// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHQUERY_H
#define CHQUERY_H

@class NSString;
@protocol CHRecognitionSessionObserver, OS_dispatch_queue, CHQueryDelegate, CHStrokeProviderVersion;

#import <Foundation/Foundation.h>

#import "CHRecognitionSessionResult.h"
#import "CHRecognitionSession.h"

@interface CHQuery : NSObject <CHRecognitionSessionObserver>

 {
    NSObject<OS_dispatch_queue> *_processingQueue;
    CHRecognitionSessionResult *_currentProcessingSessionResult;
    CGFloat _lastProcessedTime;
}


@property (nonatomic) BOOL _queryActive; // ivar: __queryActive
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *debugName;
@property (weak, nonatomic) NSObject<CHQueryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSObject<CHStrokeProviderVersion> *lastProcessedStrokeProviderVersion; // ivar: _lastProcessedStrokeProviderVersion
@property (nonatomic) CGFloat preferredUpdatesInterval; // ivar: _preferredUpdatesInterval
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly, nonatomic) CHRecognitionSession *recognitionSession; // ivar: _recognitionSession
@property (readonly) Class superclass;


-(CGFloat)preferredRecognitionResultUpdatesInterval;
-(id)init;
-(id)initWithRecognitionSession:(id)arg0 ;
-(id)q_sessionResult;
-(void)_updateForRecognitionSessionResultChangeIfNeeded;
-(void)dealloc;
-(void)pause;
-(void)q_queryResultDidChange;
-(void)q_setNeedsQueryResultUpdating;
-(void)q_updateQueryResult;
-(void)recognitionSessionDidUpdateRecognitionResult:(id)arg0 ;
-(void)start;
-(void)waitForPendingUpdates;


@end


#endif