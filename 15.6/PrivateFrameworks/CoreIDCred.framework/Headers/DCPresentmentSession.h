// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCPRESENTMENTSESSION_H
#define DCPRESENTMENTSESSION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "DCPresentmentClient.h"
#import "DCPresentmentSessionOptions.h"

@interface DCPresentmentSession : NSObject

@property (retain) DCPresentmentClient *client; // ivar: _client
@property BOOL hasBeenConfigured; // ivar: _hasBeenConfigured
@property (retain) DCPresentmentSessionOptions *options; // ivar: _options
@property (retain) NSArray *partitions; // ivar: _partitions
@property NSUInteger presentmentType; // ivar: _presentmentType


-(id)initWithPartitions:(id)arg0 presentmentType:(NSUInteger)arg1 ;
-(id)initWithPartitions:(id)arg0 presentmentType:(NSUInteger)arg1 options:(id)arg2 ;
-(void)buildErrorResponseWithStatus:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)buildResponseForSelection:(id)arg0 completion:(id)arg1 ;
// -(void)configureIfNeededWithContinuation:(id)arg0 errorHandler:(unk)arg1  ;
-(void)generateTransportKeyForSpecification:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)interpretRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif