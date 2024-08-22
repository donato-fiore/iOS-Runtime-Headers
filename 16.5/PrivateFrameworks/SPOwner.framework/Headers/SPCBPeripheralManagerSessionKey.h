// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPCBPERIPHERALMANAGERSESSIONKEY_H
#define SPCBPERIPHERALMANAGERSESSIONKEY_H

@class NSString, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SPCBPeripheralManagerSessionKey : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, copy, nonatomic) NSUUID *userIdentifier; // ivar: _userIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserIdentifier:(id)arg0 bundleIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif