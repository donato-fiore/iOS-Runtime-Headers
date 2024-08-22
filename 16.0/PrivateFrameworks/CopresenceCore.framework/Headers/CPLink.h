// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLINK_H
#define CPLINK_H

@class NSString, IDSGroupSessionUnicastParameter;
@protocol CPLinkProtocol, NSSecureCoding, NSCopying, OS_nw_connection, CPLinkDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CryptoHelper.h"

@interface CPLink : NSObject <CPLinkProtocol, NSSecureCoding, NSCopying>

 {
    CryptoHelper *_cryptoHelper;
}


@property (retain) NSObject<OS_nw_connection> *connection; // ivar: _connection
@property int connectionState; // ivar: _connectionState
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPLinkDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned char linkType; // ivar: _linkType
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *networkQueue; // ivar: _networkQueue
@property (readonly) Class superclass;
@property (copy, nonatomic) IDSGroupSessionUnicastParameter *unicastParam; // ivar: _unicastParam


+(BOOL)supportsSecureCoding;
+(NSInteger)_getIDSDataModelForLinkType:(unsigned char)arg0 ;
+(id)linkWithGroupSessionID:(id)arg0 localParticipantID:(NSUInteger)arg1 remoteParticipantID:(NSUInteger)arg2 dataMode:(NSInteger)arg3 connectionIndex:(NSUInteger)arg4 ;
+(unsigned int)_trafficClassForLinkPriority:(unsigned int)arg0 ;
-(BOOL)_isUnreliableLink;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isReady;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUnicastParameter:(id)arg0 ;
-(void)_enableKeepAlive;
-(void)_readData:(id)arg0 ;
-(void)close;
-(void)encodeWithCoder:(id)arg0 ;
-(void)requestNWConnectionWithReply:(unsigned char)arg0 completion:(id)arg1 ;
-(void)resetTrafficPriority:(unsigned int)arg0 ;
-(void)sendData:(id)arg0 ofType:(unsigned char)arg1 completion:(id)arg2 ;
-(void)sendUnicastData:(id)arg0 ofType:(unsigned char)arg1 completion:(id)arg2 ;


@end


#endif