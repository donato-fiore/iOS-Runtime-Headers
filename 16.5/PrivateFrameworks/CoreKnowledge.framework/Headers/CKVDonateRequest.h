// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVDONATEREQUEST_H
#define CKVDONATEREQUEST_H

@class NSString;
@protocol CKVDonateRequestDelegate;

#import <Foundation/Foundation.h>

#import "CKVDonateConnection.h"

@interface CKVDonateRequest : NSObject {
    CKVDonateConnection *_connection;
    NSObject<CKVDonateRequestDelegate> *_delegate;
    NSUInteger _donationRequestQueuedSignpostId;
    NSUInteger _donationRequestHandlingSignpostId;
}


@property (readonly, nonatomic) NSString *deviceId; // ivar: _deviceId
@property (readonly, nonatomic) NSInteger itemType; // ivar: _itemType
@property (readonly, nonatomic) unsigned short options; // ivar: _options
@property (readonly, nonatomic) NSString *originAppId; // ivar: _originAppId
@property (readonly, nonatomic) unsigned int requestId; // ivar: _requestId
@property (readonly, nonatomic) NSString *userId; // ivar: _userId
@property (readonly, nonatomic) NSString *validity; // ivar: _validity
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


-(BOOL)hasImplicitVersion;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDonateRequest:(id)arg0 ;
-(BOOL)isIncremental;
-(BOOL)isRanked;
-(NSUInteger)hash;
-(id)_connectionTypeString;
-(id)description;
-(id)initWithConnection:(id)arg0 delegate:(id)arg1 version:(NSUInteger)arg2 validity:(id)arg3 itemType:(NSInteger)arg4 originAppId:(id)arg5 deviceId:(id)arg6 userId:(id)arg7 options:(unsigned short)arg8 ;
-(void)_resolveOriginAppId:(id)arg0 itemType:(NSInteger)arg1 ;
-(void)handle;
-(void)interrupt;
-(void)terminateWithOptions:(unsigned short)arg0 terminationType:(NSInteger)arg1 ;


@end


#endif