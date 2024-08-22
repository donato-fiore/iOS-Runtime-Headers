// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPUNAUTHORIZEDTRACKINGADVERTISEMENT_H
#define SPUNAUTHORIZEDTRACKINGADVERTISEMENT_H

@class NSData, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPUnauthorizedTrackingAdvertisement : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *_address; // ivar: __address
@property (readonly, copy, nonatomic) NSData *address;
@property (copy, nonatomic) NSData *advertisementData; // ivar: _advertisementData
@property (copy, nonatomic) NSData *data; // ivar: _data
@property (copy, nonatomic) NSData *reserved; // ivar: _reserved
@property (nonatomic) NSInteger rssi; // ivar: _rssi
@property (copy, nonatomic) NSDate *scanDate; // ivar: _scanDate
@property (nonatomic) unsigned char status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAddress:(id)arg0 advertisementData:(id)arg1 rssi:(NSInteger)arg2 scanDate:(id)arg3 ;
-(id)initWithAddress:(id)arg0 advertisementData:(id)arg1 status:(unsigned char)arg2 reserved:(id)arg3 rssi:(NSInteger)arg4 scanDate:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif