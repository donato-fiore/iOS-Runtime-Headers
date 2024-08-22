// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSGROUPSESSIONUNICASTPARAMETER_H
#define IDSGROUPSESSIONUNICASTPARAMETER_H

@class NSString, NSData;
@protocol NSSecureCoding, NSCopying, OS_nw_endpoint, OS_nw_parameters;

#import <Foundation/Foundation.h>


@interface IDSGroupSessionUnicastParameter : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger connectionIndex; // ivar: _connectionIndex
@property (readonly, nonatomic) NSInteger dataMode; // ivar: _dataMode
@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *endpoint; // ivar: _endpoint
@property (readonly, nonatomic) NSString *groupSessionID; // ivar: _groupSessionID
@property (readonly, nonatomic) NSUInteger localParticipantID; // ivar: _localParticipantID
@property (readonly, nonatomic) NSObject<OS_nw_parameters> *parameters; // ivar: _parameters
@property (readonly, nonatomic) NSUInteger remoteParticipantID; // ivar: _remoteParticipantID
@property (readonly, nonatomic) NSData *salt; // ivar: _salt
@property int socket; // ivar: _socket


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConnectedSocket:(int)arg0 dataMode:(NSInteger)arg1 connectionIndex:(NSUInteger)arg2 ;
-(id)initWithGroupSessionID:(id)arg0 localParticipantID:(NSUInteger)arg1 remoteParticipantID:(NSUInteger)arg2 dataMode:(NSInteger)arg3 connectionIndex:(NSUInteger)arg4 ;
-(id)initWithGroupSessionID:(id)arg0 localParticipantID:(NSUInteger)arg1 remoteParticipantID:(NSUInteger)arg2 salt:(id)arg3 dataMode:(NSInteger)arg4 connectionIndex:(NSUInteger)arg5 ;
-(void)_requestNWConnectionforIDSGroupSessionUnicastParameter:(id)arg0 ;
-(void)_setUpNWConnectionforTesting:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)requestNWConnectionforIDSGroupSessionUnicastParameter:(id)arg0 ;


@end


#endif