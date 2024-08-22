// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOPROFILE_H
#define SOPROFILE_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SOProfile : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSArray *URLPrefix; // ivar: _URLPrefix
@property (retain, nonatomic) NSArray *deniedBundleIdentifiers; // ivar: _deniedBundleIdentifiers
@property (retain, nonatomic) NSString *extensionBundleIdentifier; // ivar: _extensionBundleIdentifier
@property (retain, nonatomic) NSArray *hosts; // ivar: _hosts
@property (retain, nonatomic) NSString *realm; // ivar: _realm
@property (nonatomic) NSInteger screenLockedBehavior; // ivar: _screenLockedBehavior
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)stringWithProfileType:(NSInteger)arg0 ;
+(id)stringWithScreenLockedBehavior:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif