// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRHELLORESPONSE_H
#define PRHELLORESPONSE_H

@class NSNumber, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PRHelloResponse : NSObject <NSCopying, NSSecureCoding>



@property (copy) NSNumber *addlInfoSize; // ivar: _addlInfoSize
@property (copy) NSNumber *apFirmwareVersion; // ivar: _apFirmwareVersion
@property (copy) NSNumber *calDataVersion; // ivar: _calDataVersion
@property (copy) NSNumber *dspFirmwareVersion; // ivar: _dspFirmwareVersion
@property (copy) NSString *extraBytes; // ivar: _extraBytes
@property (readonly, nonatomic) NSUInteger hardwareVersion; // ivar: _hardwareVersion
@property (readonly, nonatomic) unsigned char hsiVersionMajor; // ivar: _hsiVersionMajor
@property (readonly, nonatomic) unsigned char hsiVersionMinor; // ivar: _hsiVersionMinor
@property (copy) NSNumber *modemInitVersion; // ivar: _modemInitVersion
@property (copy) NSNumber *moduleID; // ivar: _moduleID
@property (readonly, nonatomic) NSString *roseFirmwareVersion; // ivar: _roseFirmwareVersion
@property (copy) NSString *target; // ivar: _target


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHelloResponse:(*void)arg0 ;
-(id)initWithRoseFirmwareVersion:(id)arg0 hsiVersionMajor:(unsigned char)arg1 hsiVersionMinor:(unsigned char)arg2 hardwareVersion:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif