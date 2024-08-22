// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPBROADCASTLINK_H
#define CPBROADCASTLINK_H

@class IDSGroupSessionBroadcastParameter, NSString;
@protocol CPLinkProtocol, NSSecureCoding, OS_nw_connection, CPLinkDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CryptoHelper.h"

@interface CPBroadcastLink : NSObject <CPLinkProtocol, NSSecureCoding>

 {
    CryptoHelper *_cryptoHelper;
}


@property (copy, nonatomic) IDSGroupSessionBroadcastParameter *broadcastParam; // ivar: _broadcastParam
@property (retain) NSObject<OS_nw_connection> *connection; // ivar: _connection
@property int connectionState; // ivar: _connectionState
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPLinkDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *networkQueue; // ivar: _networkQueue
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isReady;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBroadcastParam:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_readData:(id)arg0 ;
-(void)broadcastUnreliableData:(id)arg0 completion:(id)arg1 ;
-(void)close;
-(void)encodeWithCoder:(id)arg0 ;
-(void)requestNWConnectionWithReply:(id)arg0 ;


@end


#endif