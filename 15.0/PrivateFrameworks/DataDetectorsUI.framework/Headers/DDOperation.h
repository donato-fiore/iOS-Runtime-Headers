// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDOPERATION_H
#define DDOPERATION_H

@class NSOperation, NSDictionary, NSArray;
@protocol NSCopying;



@interface DDOperation : NSOperation <NSCopying>

 {
    *__DDScanQuery _query;
    int _containerNotReadyTryCount;
    NSInteger _jobIdentifier;
}


@property (retain, nonatomic) id *container; // ivar: _container
@property (retain, nonatomic) NSDictionary *context; // ivar: _context
@property (nonatomic) NSUInteger detectionTypes; // ivar: _types
@property int generationNumber; // ivar: _generationNumber
@property (nonatomic) BOOL ignoreSignatures; // ivar: _ignoreSignatures
@property BOOL isDiscarded; // ivar: _isDiscarded
@property BOOL needContinuation; // ivar: _needContinuation
@property (retain, nonatomic) NSArray *results; // ivar: _results
@property int tryCount; // ivar: _tryCount


+(BOOL)_needsFullScannerForDetectionTypes:(NSUInteger)arg0 ;
+(id)shouldUrlifyBlockForTypes:(SEL)arg0 ;
+(id)urlificationBlockForTypes:(SEL)arg0 ;
-(BOOL)_rangeValidForContainer;
-(BOOL)doURLificationOnDocument;
-(BOOL)needsFullScanner;
-(BOOL)needsToStartOver;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContainer:(id)arg0 ;
-(id)newOperationForContinuation;
-(id)newOperationForStartingOver;
-(int)_createScanQuery;
-(struct __DDScanQuery *)_createScanQueryForBackend;
-(struct __DDScanQuery *)scanQuery;
-(void)_applyContainerRestrictionsToTypes;
-(void)_setScanQuery:(struct __DDScanQuery *)arg0 ;
-(void)_updateGenerationNumber;
-(void)cancel;
-(void)cleanup;
-(void)dealloc;
-(void)dispatchContainerModificationBlock:(id)arg0 ;
-(void)dispatchScanQueryCreationWithCompletionBlock:(id)arg0 ;
-(void)main;


@end


#endif