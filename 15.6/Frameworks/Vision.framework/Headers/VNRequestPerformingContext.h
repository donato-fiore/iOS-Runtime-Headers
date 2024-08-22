// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNREQUESTPERFORMINGCONTEXT_H
#define VNREQUESTPERFORMINGCONTEXT_H

@class NSMapTable;
@protocol VNImageBufferProviding;

#import <Foundation/Foundation.h>

#import "VNSession.h"
#import "VNRequestPerformer.h"
#import "VNImageBuffer.h"
#import "VNObservationsCache.h"
#import "VNRequestForensics.h"

@interface VNRequestPerformingContext : NSObject <VNImageBufferProviding>

 {
    NSUInteger _serialNumber;
    VNSession *_session;
    unsigned int _qosClass;
    VNRequestPerformer *_weakRequestPerformer;
    VNImageBuffer *_imageBuffer_DO_NOT_DIRECTLY_ACCESS;
    NSMapTable *_requestToObservationsCacheKeyMap;
    VNObservationsCache *_observationsCache;
    VNRequestForensics *_requestForensics;
}


@property (readonly) NSUInteger serialNumber;
@property (readonly) VNSession *session;


-(BOOL)cacheObservationsOfRequest:(id)arg0 ;
-(id)_observationsCacheKeyForRequest:(id)arg0 ;
-(id)cachedObservationsAcceptedByRequest:(id)arg0 ;
-(id)imageBufferAndReturnError:(*id)arg0 ;
-(id)initWithSession:(id)arg0 requestPerformer:(id)arg1 imageBuffer:(id)arg2 forensics:(id)arg3 observationsCache:(id)arg4 ;
-(id)initWithSession:(id)arg0 requestPerformer:(id)arg1 imageBuffer:(id)arg2 forensics:(id)arg3 observationsCache:(id)arg4 qosClass:(unsigned int)arg5 ;
-(id)previousSequencedObservationsAcceptedByRequest:(id)arg0 ;
-(id)requestForensics;
-(id)requestPerformerAndReturnError:(*id)arg0 ;
-(unsigned int)qosClass;
-(void)recordSequencedObservationsOfRequest:(id)arg0 ;


@end


#endif