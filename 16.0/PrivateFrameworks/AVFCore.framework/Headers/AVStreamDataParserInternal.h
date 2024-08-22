// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVSTREAMDATAPARSERINTERNAL_H
#define AVSTREAMDATAPARSERINTERNAL_H

@class NSError, NSMutableArray, NSArray, NSMutableDictionary;
@protocol AVStreamDataParserOutputHandling, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVAsset.h"
#import "AVWeakReference.h"
#import "AVContentKeySession.h"
#import "AVContentKeyRequest.h"

@interface AVStreamDataParserInternal : NSObject {
    id<AVStreamDataParserOutputHandling> *_delegate;
    NSObject<OS_dispatch_queue> *_threadSafetyQ;
    NSInteger _status;
    NSError *_error;
    AVAsset *_asset;
    NSMutableArray *_trackIDsNotProvidingMedia;
    NSArray *_allowableMIMETypes;
    *OpaqueFigManifold _figManifold;
    NSUInteger _typeIdOfInitialFigManifold;
    *OpaqueCMBlockBuffer _accumulatedInitializationData;
    BOOL _encounteredStreamDiscontinuity;
    AVWeakReference *_legacyStreamSession;
    AVContentKeySession *_defaultContentKeySession;
    AVWeakReference *_contentKeySession;
    AVContentKeyRequest *_sessionKeyRequest;
    BOOL _startedUsingInternalContentKeySession;
    int _currentTrackID;
    NSMutableDictionary *_tracksBecomingReadyByTrackID;
    NSMutableArray *_samplesBeforeReady;
    NSUInteger _samplesBeforeReadyTotalSize;
    ? _samplesBeforeReadyTotalDuration;
    NSMutableDictionary *_trackDecryptorsByTrackID;
    NSMutableDictionary *_trackFormatDescriptionsByTrackID;
}






@end


#endif