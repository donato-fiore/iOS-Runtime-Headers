// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLGATHERINGBLEADVERTISEMENT_H
#define CLGATHERINGBLEADVERTISEMENT_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLGatheringBleAdvertisement : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *address; // ivar: _address
@property (readonly, copy, nonatomic) NSData *authTag; // ivar: _authTag
@property (nonatomic) NSInteger count; // ivar: _count
@property (nonatomic) NSInteger rssi; // ivar: _rssi
@property (readonly, nonatomic) CGFloat unixTime; // ivar: _unixTime


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodedBytes;
-(id)getDateString:(CGFloat)arg0 ;
-(id)hexString:(id)arg0 ;
-(id)initWithAddress:(id)arg0 withAuthTag:(id)arg1 withRssi:(NSInteger)arg2 withCount:(NSInteger)arg3 withTime:(CGFloat)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithPersistenceBytes:(struct ? *)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif