// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLTREMOTEREQUEST_H
#define BLTREMOTEREQUEST_H

@class PBCodable, NSString, IDSProtobuf, NSNumber;

#import <Foundation/Foundation.h>


@interface BLTRemoteRequest : NSObject

@property (nonatomic) BOOL allowCloudDelivery; // ivar: _allowCloudDelivery
@property (copy, nonatomic) id *didQueue; // ivar: _didQueue
@property (copy, nonatomic) id *didSend; // ivar: _didSend
@property (nonatomic) BOOL nonWaking; // ivar: _nonWaking
@property (retain, nonatomic) PBCodable *protobuf; // ivar: _protobuf
@property (copy, nonatomic) NSString *requestDescription; // ivar: _requestDescription
@property (copy, nonatomic) id *responseCompletion; // ivar: _responseCompletion
@property (retain, nonatomic) IDSProtobuf *responseToRequest; // ivar: _responseToRequest
@property (retain, nonatomic) NSNumber *timeout; // ivar: _timeout
@property (nonatomic) unsigned short type; // ivar: _type
@property (copy, nonatomic) NSString *uniqueID; // ivar: _uniqueID


+(id)remoteRequestWithProtobuf:(id)arg0 type:(unsigned short)arg1 ;
-(id)description;
-(id)initWithProtobuf:(id)arg0 type:(unsigned short)arg1 ;


@end


#endif