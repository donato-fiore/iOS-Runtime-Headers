// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPTUSCANYEDGE_H
#define NPTUSCANYEDGE_H

@class NSDictionary, NSString, NSDate, NWEndpoint;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NPLocation.h"
#import "NPWaldo.h"

@interface NPTuscanyEdge : NSObject <NSSecureCoding>



@property (retain) NSDictionary *currentOnRampIndexList; // ivar: _currentOnRampIndexList
@property CGFloat distance; // ivar: _distance
@property NSUInteger index; // ivar: _index
@property (readonly) NSString *label; // ivar: _label
@property (retain) NSDate *lastUsed; // ivar: _lastUsed
@property (readonly) NPLocation *location; // ivar: _location
@property (readonly) NWEndpoint *onRampEndpoint; // ivar: _onRampEndpoint
@property (retain) NSDictionary *onRampLists; // ivar: _onRampLists
@property (weak) NPWaldo *parentWaldo; // ivar: _parentWaldo
@property (readonly) NWEndpoint *probeEndpoint; // ivar: _probeEndpoint
@property BOOL probePending; // ivar: _probePending
@property BOOL reResolve; // ivar: _reResolve
@property (retain) NWEndpoint *savedEndpoint; // ivar: _savedEndpoint


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compareByDistance:(id)arg0 ;
-(NSInteger)currentIndex:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)getCurrentOnRamp:(id)arg0 ;
-(id)getOnRamp:(NSInteger)arg0 addressFamily:(id)arg1 ;
-(id)getPortFromEndpoint:(id)arg0 defaultPort:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLabel:(id)arg0 index:(NSUInteger)arg1 onRampEndpoint:(id)arg2 probeEndpoint:(id)arg3 location:(id)arg4 ;
-(id)nextOnRampForLatency:(id)arg0 outIndex:(*NSInteger)arg1 ;
-(id)unsynthesizeAddresses:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)iterateOnRampsForAddressFamily:(id)arg0 withBlock:(id)arg1 ;
-(void)linkWithOnRampsRetainMissingAddressFamilies:(BOOL)arg0 ;
-(void)resolveWithCompletionHandler:(id)arg0 ;
-(void)setCurrentIndex:(NSInteger)arg0 addressFamily:(id)arg1 ;


@end


#endif