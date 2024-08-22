// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HPSSETTING_H
#define HPSSETTING_H

@class NSString;
@protocol NSCopying, NSSecureCoding, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HPSSetting : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly, copy, nonatomic) NSObject<NSObject><NSCopying><NSSecureCoding> *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)settingWithKeyPath:(id)arg0 value:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSetting:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyPath:(id)arg0 value:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif