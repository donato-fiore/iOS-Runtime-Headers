// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLNETWORKSTATE_H
#define CPLNETWORKSTATE_H

@class NSDictionary;
@protocol OS_nw_path;

#import <Foundation/Foundation.h>


@interface CPLNetworkState : NSObject

@property (readonly, nonatomic) BOOL canUseNetwork;
@property (readonly, nonatomic, getter=isCellular) BOOL cellular;
@property (readonly, nonatomic, getter=isCellularRestricted) BOOL cellularRestricted; // ivar: _cellularRestricted
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic, getter=isConstrained) BOOL constrained;
@property (readonly, nonatomic, getter=isInAirplaneMode) BOOL inAirplaneMode; // ivar: _inAirplaneMode
@property (readonly, nonatomic) NSObject<OS_nw_path> *networkPath; // ivar: _networkPath
@property (readonly, nonatomic) NSDictionary *plistDescription;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFunctionallyEqual:(id)arg0 ;
-(id)description;
-(id)initWithNetworkPath:(id)arg0 cellularRestricted:(BOOL)arg1 inAirplaneMode:(BOOL)arg2 ;
-(id)redactedDescription;


@end


#endif