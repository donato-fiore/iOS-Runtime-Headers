// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MBDEVICETRANSFERPREFLIGHT_H
#define MBDEVICETRANSFERPREFLIGHT_H

@class NSString, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MBDeviceTransferPreflight : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *activeAppleID; // ivar: _activeAppleID
@property (retain, nonatomic) NSDictionary *appleIDs; // ivar: _appleIDs
@property (nonatomic) NSUInteger sourceDeviceDataSize; // ivar: _sourceDeviceDataSize
@property (nonatomic) NSUInteger sourcePurgeableSpaceSize; // ivar: _sourcePurgeableSpaceSize
@property (nonatomic) NSUInteger targetDeviceFreeSpaceSize; // ivar: _targetDeviceFreeSpaceSize
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif