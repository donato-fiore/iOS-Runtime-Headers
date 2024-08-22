// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSKEYCHAINITEMKIND_H
#define VSKEYCHAINITEMKIND_H

@class NSDictionary, NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VSKeychainItemKind : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSDictionary *attributesByName;
@property (readonly, copy, nonatomic) NSDictionary *attributesBySecItemAttributeKey;
@property (copy, nonatomic) NSString *itemClassName; // ivar: _itemClassName
@property (copy, nonatomic) NSArray *properties; // ivar: _properties
@property (nonatomic) *__CFString secItemClass; // ivar: _secItemClass


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif