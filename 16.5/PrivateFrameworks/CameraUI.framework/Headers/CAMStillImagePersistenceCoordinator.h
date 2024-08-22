// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMSTILLIMAGEPERSISTENCECOORDINATOR_H
#define CAMSTILLIMAGEPERSISTENCECOORDINATOR_H

@class NSString, NSMutableDictionary;
@protocol CAMStillImagePersistenceCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface CAMStillImagePersistenceCoordinator : NSObject

@property (readonly, nonatomic) NSString *_loggingPrefix; // ivar: __loggingPrefix
@property (readonly, nonatomic) NSMutableDictionary *_pendingLocalPersistenceResults; // ivar: __pendingLocalPersistenceResults
@property (readonly, nonatomic) NSMutableDictionary *_receivedCoordinationInfos; // ivar: __receivedCoordinationInfos
@property (readonly, weak, nonatomic) NSObject<CAMStillImagePersistenceCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL hasReceivedAllExpectedResponses;
@property (readonly, copy, nonatomic) NSString *loggingIdentifier; // ivar: _loggingIdentifier


-(id)_debugStringForUnreceivedResultSpecifiersFromExpectedResultSpecifiers:(id)arg0 receivedCoordinationInfos:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 loggingIdentifier:(id)arg1 ;
-(unsigned int)_powerAssertionReasonForResultSpecifiers:(NSUInteger)arg0 ;
-(void)_dispatchRemotePersistenceIfPossibleForPairWithOriginalResultSpecifiers:(NSUInteger)arg0 overCaptureResultSpecifiers:(NSUInteger)arg1 request:(id)arg2 shouldPersistAsSingleAsset:(BOOL)arg3 ;
-(void)_dispatchRemotePersistenceIfPossibleForPairWithOriginalResultSpecifiers:(NSUInteger)arg0 processedResultSpecifiers:(NSUInteger)arg1 request:(id)arg2 shouldPersistAsSingleAsset:(BOOL)arg3 ;
-(void)_dispatchRemotePersistenceIfPossibleForResultSpecifiers:(NSUInteger)arg0 request:(id)arg1 ;
-(void)updateForCoordinationInfo:(id)arg0 localPersistenceResult:(id)arg1 request:(id)arg2 ;
-(void)updateForTimeoutTimerFiredForCoordinationInfo:(id)arg0 request:(id)arg1 ;


@end


#endif