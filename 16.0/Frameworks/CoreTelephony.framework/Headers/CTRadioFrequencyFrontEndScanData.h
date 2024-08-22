// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTRADIOFREQUENCYFRONTENDSCANDATA_H
#define CTRADIOFREQUENCYFRONTENDSCANDATA_H

@class NSMutableArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTRadioFrequencyFrontEndScanData : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger hwHousing; // ivar: _hwHousing
@property (nonatomic) NSUInteger hwPrdId; // ivar: _hwPrdId
@property (nonatomic) NSUInteger hwRev; // ivar: _hwRev
@property (nonatomic) NSUInteger hwSku; // ivar: _hwSku
@property (nonatomic) NSUInteger numDetectedDevices; // ivar: _numDetectedDevices
@property (nonatomic) NSUInteger numExpectedDevices; // ivar: _numExpectedDevices
@property (nonatomic) NSUInteger numMissingDevices; // ivar: _numMissingDevices
@property (nonatomic) NSUInteger rfcHwid; // ivar: _rfcHwid
@property (nonatomic) BOOL rfcInitPass; // ivar: _rfcInitPass
@property (nonatomic) NSUInteger rfcMmwHwid; // ivar: _rfcMmwHwid
@property (nonatomic) NSUInteger rfcMmwRev; // ivar: _rfcMmwRev
@property (nonatomic) NSUInteger rfcRev; // ivar: _rfcRev
@property (retain, nonatomic) NSMutableArray *rffeScanInfo; // ivar: _rffeScanInfo
@property (nonatomic) BOOL rffeScanPass; // ivar: _rffeScanPass
@property (nonatomic) NSUInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif