// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPTPING_H
#define NPTPING_H

@class NSMutableArray, NSString;
@protocol NSSecureCoding, SimplePingDelegate, NSCopying, OS_nw_activity;

#import <Foundation/Foundation.h>

#import "SimplePing.h"
#import "NPTPingResult.h"

@interface NPTPing : NSObject <NSSecureCoding, SimplePingDelegate, NSCopying>

 {
    SimplePing *pinger;
    NSUInteger pingCount;
    NSMutableArray *pings;
    NSObject<OS_nw_activity> *activityParent;
    NSObject<OS_nw_activity> *pingActivity;
}


@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NPTPingResult *results; // ivar: _results
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNetworkActivityParent:(id)arg0 ;
-(id)initWithNetworkActivityParent:(id)arg0 pingTarget:(id)arg1 ;
-(void)cancel;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sendPing;
-(void)simplePing:(id)arg0 didFailToSendPacket:(id)arg1 sequenceNumber:(unsigned short)arg2 error:(id)arg3 ;
-(void)simplePing:(id)arg0 didFailWithError:(id)arg1 ;
-(void)simplePing:(id)arg0 didReceivePingResponsePacket:(id)arg1 sequenceNumber:(unsigned short)arg2 ;
-(void)simplePing:(id)arg0 didReceiveUnexpectedPacket:(id)arg1 ;
-(void)simplePing:(id)arg0 didSendPacket:(id)arg1 sequenceNumber:(unsigned short)arg2 ;
-(void)simplePing:(id)arg0 didStartWithAddress:(id)arg1 ;
-(void)simplePing:(id)arg0 didTimeOut:(id)arg1 sequenceNumber:(unsigned short)arg2 error:(id)arg3 ;
-(void)startWithNumberOfPings:(NSUInteger)arg0 forcingIPv4:(BOOL)arg1 forcingIPv6:(BOOL)arg2 ;
-(void)startWithNumberOfPings:(NSUInteger)arg0 forcingIPv4:(BOOL)arg1 forcingIPv6:(BOOL)arg2 completion:(id)arg3 ;
-(void)stop;


@end


#endif