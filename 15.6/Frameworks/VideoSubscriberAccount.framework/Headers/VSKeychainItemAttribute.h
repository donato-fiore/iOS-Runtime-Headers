// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSKEYCHAINITEMATTRIBUTE_H
#define VSKEYCHAINITEMATTRIBUTE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VSKeychainItemAttribute : NSObject <NSCopying>



@property (nonatomic) NSUInteger attributeType; // ivar: _attributeType
@property (copy, nonatomic) NSString *attributeValueClassName; // ivar: _attributeValueClassName
@property (retain, nonatomic) id *defaultValue; // ivar: _defaultValue
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) *__CFString secItemAttributeKey; // ivar: _secItemAttributeKey


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif