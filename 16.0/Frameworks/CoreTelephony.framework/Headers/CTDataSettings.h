// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTDATASETTINGS_H
#define CTDATASETTINGS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTDataSettings : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic, getter=isAirplaneModeEnabled) BOOL airplaneModeEnabled; // ivar: _airplaneModeEnabled
@property (nonatomic, getter=isCellularDataCapable) BOOL cellularDataCapable; // ivar: _cellularDataCapable
@property (nonatomic, getter=isCellularDataEnabled) BOOL cellularDataEnabled; // ivar: _cellularDataEnabled


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif