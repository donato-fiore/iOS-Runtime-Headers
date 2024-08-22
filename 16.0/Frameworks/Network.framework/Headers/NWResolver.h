// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWRESOLVER_H
#define NWRESOLVER_H

@class NSArray, NSSet;
@protocol OS_nw_resolver;

#import <Foundation/Foundation.h>

#import "NWEndpoint.h"
#import "NWParameters.h"

@interface NWResolver : NSObject

@property (readonly) NWEndpoint *endpoint; // ivar: _endpoint
@property (retain) NSArray *internalResolvedEndpointArray; // ivar: _internalResolvedEndpointArray
@property (retain) NSSet *internalResolvedEndpoints; // ivar: _internalResolvedEndpoints
@property (readonly) NSObject<OS_nw_resolver> *internalResolver; // ivar: _internalResolver
@property NSInteger internalStatus; // ivar: _internalStatus
@property (readonly) NWParameters *parameters; // ivar: _parameters
@property (readonly, nonatomic) NSArray *resolvedEndpointArray;
@property (readonly, nonatomic) NSSet *resolvedEndpoints;
@property (readonly, nonatomic) NSInteger status;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(id)copyResolvedEndpointArray;
-(id)copyResolvedEndpoints;
-(id)initWithEndpoint:(id)arg0 parameters:(id)arg1 ;
-(id)initWithPath:(id)arg0 ;
-(void)dealloc;
-(void)setUpdateHandler;


@end


#endif