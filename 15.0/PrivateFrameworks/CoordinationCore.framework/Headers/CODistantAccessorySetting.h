// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CODISTANTACCESSORYSETTING_H
#define CODISTANTACCESSORYSETTING_H

@class NSUUID, NSString;
@protocol NSCopying, NSSecureCoding, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CODistantAccessorySetting : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *accessoryUniqueIdentifier; // ivar: _accessoryUniqueIdentifier
@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (copy, nonatomic) NSObject<NSObject><NSCopying><NSSecureCoding> *value; // ivar: _value
@property (readonly, nonatomic, getter=isWritable) BOOL writable; // ivar: _writable


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAccessorySetting:(id)arg0 accessory:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif