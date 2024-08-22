// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCAMERACLIPPLAYERQUEUEUPDATE_H
#define HFCAMERACLIPPLAYERQUEUEUPDATE_H

@class NSArray, NSDictionary;
@protocol HFCameraClipManager;

#import <Foundation/Foundation.h>

#import "HFUniqueArrayDiff.h"
#import "HFCameraClipPosition.h"

@interface HFCameraClipPlayerQueueUpdate : NSObject

@property (readonly, nonatomic) NSObject<HFCameraClipManager> *clipManager; // ivar: _clipManager
@property (readonly, nonatomic) NSArray *clips; // ivar: _clips
@property (nonatomic) BOOL hasQueueChanges; // ivar: _hasQueueChanges
@property (readonly, nonatomic) NSArray *initialQueuedItems; // ivar: _initialQueuedItems
@property (readonly, nonatomic) NSDictionary *initialQueuedItemsByClipID; // ivar: _initialQueuedItemsByClipID
@property (nonatomic) BOOL queueChangesRequireRebuild; // ivar: _queueChangesRequireRebuild
@property (retain, nonatomic) HFUniqueArrayDiff *queueDiff; // ivar: _queueDiff
@property (readonly, nonatomic) NSUInteger queueLimit; // ivar: _queueLimit
@property (readonly, nonatomic) HFCameraClipPosition *targetPosition; // ivar: _targetPosition
@property (retain, nonatomic) NSArray *updatedClipQueue; // ivar: _updatedClipQueue


-(id)_buildNewClipQueueForPosition:(id)arg0 ;
-(id)initWithClipManager:(id)arg0 clips:(id)arg1 targetPosition:(id)arg2 queuedItems:(id)arg3 queueLimit:(NSUInteger)arg4 ;
-(void)_computeQueueDiff;
-(void)performUpdatesOnQueue:(id)arg0 ;


@end


#endif