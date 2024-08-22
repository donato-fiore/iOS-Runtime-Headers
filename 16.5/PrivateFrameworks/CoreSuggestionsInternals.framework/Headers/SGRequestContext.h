// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGREQUESTCONTEXT_H
#define SGREQUESTCONTEXT_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>

#import "SGServiceContext.h"

@interface SGRequestContext : NSObject

@property (readonly, nonatomic) int backpressureHazard; // ivar: _backpressureHazard
@property (readonly, nonatomic) int concurrencyBehavior; // ivar: _concurrencyBehavior
@property (readonly, nonatomic) int extractionMode; // ivar: _extractionMode
@property (readonly, nonatomic) NSOperationQueue *processingQueue;
@property (readonly, nonatomic) SGServiceContext *serviceContext; // ivar: _serviceContext
@property (readonly, nonatomic) NSOperationQueue *storageQueue;


-(id)init;
-(id)initWithServiceContext:(id)arg0 concurrencyBehavior:(int)arg1 backpressureHazard:(int)arg2 ;
-(id)initWithServiceContext:(id)arg0 concurrencyBehavior:(int)arg1 backpressureHazard:(int)arg2 extractionMode:(int)arg3 ;


@end


#endif