// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAFKEYCHAINITEMDESCRIPTOR_H
#define AAFKEYCHAINITEMDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AAFKeychainItemDescriptor : NSObject

@property (copy, nonatomic) NSString *accessGroup; // ivar: _accessGroup
@property (copy, nonatomic) NSString *account; // ivar: _account
@property (nonatomic) NSUInteger invisible; // ivar: _invisible
@property (nonatomic) NSUInteger itemAccessible; // ivar: _itemAccessible
@property (nonatomic) NSUInteger itemClass; // ivar: _itemClass
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *securityDomain; // ivar: _securityDomain
@property (copy, nonatomic) NSString *server; // ivar: _server
@property (copy, nonatomic) NSString *service; // ivar: _service
@property (nonatomic) NSUInteger synchronizable; // ivar: _synchronizable
@property (nonatomic) NSUInteger useDataProtection; // ivar: _useDataProtection


-(NSUInteger)_accessibleWithKeychainAccessible:(id)arg0 ;
-(NSUInteger)_classWithKeychainClass:(id)arg0 ;
-(NSUInteger)_optionalValueFromObject:(id)arg0 ;
-(id)_keychainAccessibleWithAccessible:(NSUInteger)arg0 ;
-(id)_keychainClassWithClass:(NSUInteger)arg0 ;
-(id)_objectForOptionalBool:(NSUInteger)arg0 ;
-(id)attributes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAttributes:(id)arg0 ;


@end


#endif