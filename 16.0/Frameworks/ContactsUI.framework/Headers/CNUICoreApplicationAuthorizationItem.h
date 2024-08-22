// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUICOREAPPLICATIONAUTHORIZATIONITEM_H
#define CNUICOREAPPLICATIONAUTHORIZATIONITEM_H

@class NSString, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CNUICoreApplicationAuthorizationItem.h"

@interface CNUICoreApplicationAuthorizationItem : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger authorization; // ivar: _authorization
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, nonatomic) NSData *icon; // ivar: _icon
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) CNUICoreApplicationAuthorizationItem *snapshot; // ivar: _snapshot


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIcon:(id)arg0 name:(id)arg1 bundleIdentifier:(id)arg2 deviceType:(NSInteger)arg3 authorization:(NSInteger)arg4 ;
-(id)initWithIcon:(id)arg0 name:(id)arg1 bundleIdentifier:(id)arg2 deviceType:(NSInteger)arg3 authorization:(NSInteger)arg4 shouldTakeSnapshot:(BOOL)arg5 ;
-(id)itemBySettingIcon:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif