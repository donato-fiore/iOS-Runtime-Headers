// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNAMULTISCENESESSIONTRACKER_H
#define ICNAMULTISCENESESSIONTRACKER_H

@class NSDictionary, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICASSessionSummaryData.h"

@interface ICNAMultiSceneSessionTracker : NSObject

@property (readonly, nonatomic) BOOL hasLiveTimers;
@property (nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue; // ivar: _isolationQueue
@property (retain, nonatomic) NSDictionary *sceneSessionTrackers; // ivar: _sceneSessionTrackers
@property (readonly, nonatomic) NSString *sessionDetailDescription;
@property (readonly, nonatomic) NSInteger sessionDetailType;
@property (readonly, nonatomic) ICASSessionSummaryData *sessionSummaryData;


-(BOOL)invalidated;
-(id)init;
-(void)endAllSessionsAndInvalidate;
-(void)endNotesSession;
-(void)endPaperSession;
-(void)startNotesSession;
-(void)startPaperSession;


@end


#endif