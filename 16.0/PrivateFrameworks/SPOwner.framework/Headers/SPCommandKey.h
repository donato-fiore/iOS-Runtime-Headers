// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPCOMMANDKEY_H
#define SPCOMMANDKEY_H

@class NSData, NSDateInterval, NSString, NSNumber;
@protocol NSCopying, NSSecureCoding, SPNearbyToken, SPConnectionMaterial;

#import <Foundation/Foundation.h>

#import "SPBeaconingKey.h"

@interface SPCommandKey : NSObject <NSCopying, NSSecureCoding, SPNearbyToken, SPConnectionMaterial>



@property (readonly, copy, nonatomic) NSData *address;
@property (copy, nonatomic) SPBeaconingKey *beaconingKey; // ivar: _beaconingKey
@property (copy, nonatomic) NSData *commandKey; // ivar: _commandKey
@property (copy, nonatomic) NSData *connectionToken; // ivar: _connectionToken
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval; // ivar: dateInterval
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *nearbyToken; // ivar: _nearbyToken
@property (copy, nonatomic) NSNumber *primaryIndex; // ivar: _primaryIndex
@property (copy, nonatomic) NSNumber *secondaryIndex; // ivar: _secondaryIndex
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBeaconingKey:(id)arg0 commandKey:(id)arg1 connectionToken:(id)arg2 nearbyToken:(id)arg3 primaryIndex:(id)arg4 secondaryIndex:(id)arg5 type:(NSInteger)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif