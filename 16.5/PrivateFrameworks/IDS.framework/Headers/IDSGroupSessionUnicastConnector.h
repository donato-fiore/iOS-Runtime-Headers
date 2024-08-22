// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSGROUPSESSIONUNICASTCONNECTOR_H
#define IDSGROUPSESSIONUNICASTCONNECTOR_H

@class NSString, NSData;
@protocol NSSecureCoding, NSCopying, OS_nw_connection, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IDSGroupSessionUnicastConnector : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSObject<OS_nw_connection> *cachedConnection; // ivar: _cachedConnection
@property (copy, nonatomic) id *connectionReadyCallback; // ivar: _connectionReadyCallback
@property (readonly, nonatomic) NSInteger dataMode; // ivar: _dataMode
@property (readonly, nonatomic) NSString *groupSessionIDAlias; // ivar: _groupSessionIDAlias
@property (readonly, nonatomic) NSUInteger participantIDAlias; // ivar: _participantIDAlias
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSData *salt; // ivar: _salt


+(BOOL)supportsSecureCoding;
+(id)extractDictionaryFromDataBlobFrom:(id)arg0 error:(*id)arg1 ;
+(void)requestNWConnectionToVirtualParticipant:(NSUInteger)arg0 forSession:(id)arg1 completionHandler:(id)arg2 ;
+(void)requestNWConnectionWithDataBlob:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createDataBlobFrom:(id)arg0 port:(unsigned short)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGroupSessionID:(id)arg0 participantID:(NSUInteger)arg1 dataMode:(NSInteger)arg2 ;
-(id)initWithGroupSessionIDAlias:(id)arg0 participantIDAlias:(NSUInteger)arg1 salt:(id)arg2 dataMode:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)listenForIncomingConnection:(id)arg0 ;
-(void)requestDataBlob:(id)arg0 ;


@end


#endif