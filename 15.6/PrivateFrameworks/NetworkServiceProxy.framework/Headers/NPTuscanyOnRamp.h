// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPTUSCANYONRAMP_H
#define NPTUSCANYONRAMP_H

@class NWNetworkAgentRegistration, NSData, NSDate, NSURLSession, NSUUID, NWEndpoint, NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSPKeyNetworkAgent.h"
#import "NPWaldo.h"
#import "NPTunnelTuscanyEndpoint.h"

@interface NPTuscanyOnRamp : NSObject <NSSecureCoding>



@property NSInteger TFOStatus; // ivar: _TFOStatus
@property (retain) NSPKeyNetworkAgent *agent; // ivar: _agent
@property (retain) NWNetworkAgentRegistration *agentRegistration; // ivar: _agentRegistration
@property (readonly) NSInteger currentEdgeType; // ivar: _currentEdgeType
@property (retain) NSData *dayPass; // ivar: _dayPass
@property (retain) NSDate *dayPassCreationDate; // ivar: _dayPassCreationDate
@property BOOL dayPassFailed; // ivar: _dayPassFailed
@property CGFloat dayPassHardExpiry; // ivar: _dayPassHardExpiry
@property BOOL dayPassPending; // ivar: _dayPassPending
@property (readonly) BOOL dayPassRefreshAllowed;
@property (retain) NSURLSession *dayPassSession; // ivar: _dayPassSession
@property unsigned int dayPassSessionCounter;
@property (retain) NSUUID *dayPassUUID; // ivar: _dayPassUUID
@property (readonly) NWEndpoint *daypassEndpoint; // ivar: _daypassEndpoint
@property (readonly) NSDictionary *descriptionDictionary;
@property int error; // ivar: _error
@property (readonly) BOOL isDayPassExpired;
@property (readonly) BOOL isTFOEnabled;
@property (readonly) NSUInteger maxFrameSize; // ivar: _maxFrameSize
@property (weak) NPWaldo *parentWaldo; // ivar: _parentWaldo
@property (retain) NSDate *retryDate; // ivar: _retryDate
@property (readonly) NSUInteger rtt; // ivar: _rtt
@property (readonly) NSString *shortDescription;
@property (retain) NPTunnelTuscanyEndpoint *tuscanyEndpoint; // ivar: _tuscanyEndpoint


+(BOOL)supportsSecureCoding;
-(BOOL)fillTestDaypass;
-(BOOL)isDayPassPastExpiry:(CGFloat)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)registerAgentWithKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)getTuscanyEndpoint:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEndpoint:(id)arg0 ;
-(id)initWithKey:(id)arg0 ;
-(unsigned int)copyValue:(*void)arg0 ofSize:(unsigned int)arg1 fromOffset:(unsigned int)arg2 base:(char *)arg3 totalLength:(unsigned int)arg4 ;
-(unsigned int)getNextSessionCounter;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidateDayPass;
-(void)refreshDayPassWithWaldoDelegate:(id)arg0 softExpiry:(CGFloat)arg1 retryInterval:(CGFloat)arg2 edge:(id)arg3 completionHandler:(id)arg4 ;
-(void)unregisterAgent;
-(void)updateSessionCounterFromKernel;


@end


#endif