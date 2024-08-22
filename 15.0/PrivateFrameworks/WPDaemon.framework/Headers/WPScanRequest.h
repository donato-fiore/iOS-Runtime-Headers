// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WPSCANREQUEST_H
#define WPSCANREQUEST_H

@class NSData, NSDictionary, NSArray, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WPScanRequest : NSObject <NSSecureCoding>



@property BOOL activeScanning; // ivar: _activeScanning
@property NSInteger advBuffer; // ivar: _advBuffer
@property BOOL allowDuplicates; // ivar: _allowDuplicates
@property (retain, nonatomic) NSData *blobValue; // ivar: _blobValue
@property unsigned char clientType; // ivar: _clientType
@property BOOL holdVoucher; // ivar: _holdVoucher
@property (retain, nonatomic) NSData *maskValue; // ivar: _maskValue
@property NSInteger nearbyScanMode; // ivar: _nearbyScanMode
@property (retain) NSDictionary *options; // ivar: _options
@property (retain) NSArray *peers; // ivar: _peers
@property BOOL priorityCritical; // ivar: _priorityCritical
@property BOOL range; // ivar: _range
@property BOOL retainDuplicates; // ivar: _retainDuplicates
@property (retain) NSNumber *rssiThreshold; // ivar: _rssiThreshold
@property BOOL scanCache; // ivar: _scanCache
@property BOOL scanWhenLocked; // ivar: _scanWhenLocked
@property ? scanningRates; // ivar: _scanningRates
@property BOOL startPending; // ivar: _startPending
@property CGFloat updateTime; // ivar: _updateTime


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif