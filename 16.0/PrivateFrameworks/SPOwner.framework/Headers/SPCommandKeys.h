// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPCOMMANDKEYS_H
#define SPCOMMANDKEYS_H

@class NSData, NSDateInterval, NSString;
@protocol NSCopying, NSSecureCoding, SPNearbyToken, SPConnectionToken;

#import <Foundation/Foundation.h>

#import "SPBeaconingKey.h"

@interface SPCommandKeys : NSObject <NSCopying, NSSecureCoding, SPNearbyToken, SPConnectionToken>



@property (readonly, copy, nonatomic) NSData *address;
@property (copy, nonatomic) SPBeaconingKey *beaconingKey; // ivar: _beaconingKey
@property (copy, nonatomic) NSData *commandKey; // ivar: _commandKey
@property (copy, nonatomic) NSData *connectionToken; // ivar: _connectionToken
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *nearbyToken; // ivar: _nearbyToken
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBeaconingKey:(id)arg0 commandKey:(id)arg1 connectionToken:(id)arg2 nearbyToken:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif