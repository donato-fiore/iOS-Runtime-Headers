// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLTGENERATORTHUMBNAILREQUEST_H
#define QLTGENERATORTHUMBNAILREQUEST_H

@class NSError, QLThumbnailGenerationRequest, NSNumber;
@protocol OS_os_activity, OS_dispatch_group, QLIncrementalThumbnailGenerationHandler;

#import <Foundation/Foundation.h>

#import "QLDiskStore.h"
#import "QLPreviewThumbnailGenerator.h"

@interface QLTGeneratorThumbnailRequest : NSObject

@property (retain) NSObject<OS_os_activity> *activity; // ivar: _activity
@property (readonly, nonatomic) NSUInteger badgeType; // ivar: _badgeType
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *batchDispatchGroup; // ivar: _batchDispatchGroup
@property (readonly) BOOL cacheEnabled;
@property BOOL cancelled; // ivar: _cancelled
@property BOOL didCheckCache; // ivar: _didCheckCache
@property (retain) QLDiskStore *diskStore; // ivar: _diskStore
@property (retain, nonatomic) NSError *generationError; // ivar: _generationError
@property (readonly, nonatomic) NSObject<QLIncrementalThumbnailGenerationHandler> *generationHandler; // ivar: _generationHandler
@property (retain, nonatomic) QLPreviewThumbnailGenerator *generator; // ivar: _generator
@property (nonatomic) NSUInteger handledRequestedTypes; // ivar: _handledRequestedTypes
@property (readonly, nonatomic) QLThumbnailGenerationRequest *request; // ivar: _request
@property (retain, nonatomic) NSNumber *requestBadgeType; // ivar: _requestBadgeType
@property (nonatomic) NSUInteger successfullyHandldedRequestedTypes; // ivar: _successfullyHandldedRequestedTypes
@property (retain) NSObject<OS_os_activity> *topActivity; // ivar: _topActivity
@property (readonly, nonatomic) NSUInteger unhandledRequestedTypes;


-(BOOL)hasHandledAllRequestedTypesOrMostRepresentativeType;
-(BOOL)needsLowQualityThumbnailGeneration;
-(BOOL)shouldGenerateLowQualityThumbnailOnCacheMiss;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)_requestedTypesForRepresentationType:(NSInteger)arg0 ;
-(id)description;
-(id)initWithRequest:(id)arg0 generationHandler:(id)arg1 batchDispatchGroup:(id)arg2 ;
-(void)_adjustRequestInformationIfNeeded;
-(void)addTypeToHandledTypes:(NSInteger)arg0 ;
-(void)addTypeToSuccessfullyHandledTypes:(NSInteger)arg0 ;
-(void)cancel;


@end


#endif