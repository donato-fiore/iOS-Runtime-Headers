// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVDONATEREQUEST_H
#define CKVDONATEREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CKVDonateConnection.h"

@interface CKVDonateRequest : NSObject {
    CKVDonateConnection *_connection;
}


@property (readonly, nonatomic) NSString *deviceId; // ivar: _deviceId
@property (readonly, nonatomic) NSInteger itemType; // ivar: _itemType
@property (readonly, nonatomic) unsigned short options; // ivar: _options
@property (readonly, nonatomic) NSString *originAppId; // ivar: _originAppId
@property (readonly, nonatomic) unsigned int requestId; // ivar: _requestId
@property (readonly, nonatomic) NSString *userId; // ivar: _userId
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDonateRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithConnection:(id)arg0 version:(NSUInteger)arg1 itemType:(NSInteger)arg2 originAppId:(id)arg3 deviceId:(id)arg4 userId:(id)arg5 options:(unsigned short)arg6 ;
-(void)handle;
-(void)timeout;


@end


#endif