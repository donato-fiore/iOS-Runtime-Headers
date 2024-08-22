// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NURENDERREQUEST_H
#define NURENDERREQUEST_H

@class NSString, NSArray;
@protocol NSCopying, NUDevice, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NUComposition.h"
#import "NUPriority.h"
#import "NURenderContext.h"

@interface NURenderRequest : NSObject <NSCopying>

 {
    NSInteger _copiedFromRequestNumber;
    NSInteger _parentRequestNumber;
}


@property (readonly, copy, nonatomic) NSString *additionalDebugInfo;
@property (copy) id *completionBlock; // ivar: _completionBlock
@property (copy, nonatomic) NUComposition *composition;
@property (retain, nonatomic) NSObject<NUDevice> *device; // ivar: _device
@property (copy) NUComposition *internalComposition; // ivar: _internalComposition
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSArray *pipelineFilters; // ivar: _pipelineFilters
@property (retain, nonatomic) NUPriority *priority; // ivar: _priority
@property (retain, nonatomic) NURenderContext *renderContext; // ivar: _renderContext
@property (nonatomic) NSInteger requestNumber; // ivar: _requestNumber
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // ivar: _responseQueue
@property (nonatomic) NSInteger sampleMode; // ivar: _sampleMode
@property BOOL shouldCoalesceUpdates;
@property CGFloat submitTime; // ivar: _submitTime
@property (nonatomic) ? time; // ivar: _time
@property (retain) id *voucher; // ivar: _voucher


-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithComposition:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(id)newRenderJob;
-(id)submitGenericSynchronous:(*id)arg0 ;
-(void)introspectPrepare:(id)arg0 ;
-(void)submitGeneric:(id)arg0 ;
// -(void)submitGenericConfiguringRequest:(id)arg0 completion:(unk)arg1  ;
-(void)takePropertiesFromRequest:(id)arg0 ;


@end


#endif