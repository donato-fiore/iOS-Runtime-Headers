// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDELEGATIONNETSERVICETXTRECORD_H
#define ICDELEGATIONNETSERVICETXTRECORD_H

@class NSData, NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICDelegationNetServiceTXTRecord : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSData *TXTRecordData;
@property (copy, nonatomic) NSArray *delegationAccountUUIDs; // ivar: _delegationAccountUUIDs
@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (nonatomic) NSInteger securityMode; // ivar: _securityMode
@property (nonatomic) NSInteger serviceVersion; // ivar: _serviceVersion


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithTXTRecordData:(id)arg0 ;


@end


#endif