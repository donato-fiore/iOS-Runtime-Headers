// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENEXPOSUREDETECTIONSESSION_H
#define ENEXPOSUREDETECTIONSESSION_H

@protocol CUXPCCodable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ENManager.h"
#import "ENExposureConfiguration.h"

@interface ENExposureDetectionSession : NSObject <CUXPCCodable>

 {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _finishCalled;
    NSUInteger _keysOutstanding;
    ENManager *_manager;
    NSUInteger _totalKeyCount;
}


@property (retain, nonatomic) ENExposureConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) NSUInteger maximumKeyCount; // ivar: _maximumKeyCount


+(NSInteger)authorizationStatus;
-(CGFloat)estimateRiskWithExposureInfo:(id)arg0 referenceTime:(CGFloat)arg1 transmissionRiskLevel:(char *)arg2 skip:(*BOOL)arg3 ;
-(CGFloat)scoreWithExposureInfo:(id)arg0 skip:(*BOOL)arg1 ;
-(id)description;
-(id)init;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)_activateWithCompletionHandler:(id)arg0 ;
-(void)_invalidated;
-(void)activateWithCompletionHandler:(id)arg0 ;
-(void)addDiagnosisKeys:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithXPCObject:(id)arg0 ;
-(void)finishedDiagnosisKeysWithCompletionHandler:(id)arg0 ;
-(void)getExposureInfoWithMaximumCount:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)invalidate;
-(void)updateDaySummary:(id)arg0 exposureInfo:(id)arg1 score:(CGFloat)arg2 ;


@end


#endif