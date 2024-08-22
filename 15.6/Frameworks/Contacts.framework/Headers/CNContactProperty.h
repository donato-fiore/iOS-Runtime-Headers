// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTPROPERTY_H
#define CNCONTACTPROPERTY_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CNContact.h"

@interface CNContactProperty : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_key;
    NSString *_identifier;
    CNContact *_internalContact;
}


@property (readonly, copy, nonatomic) CNContact *contact;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) id *value;


+(BOOL)supportsSecureCoding;
+(id)contactPropertyWithContact:(id)arg0 propertyKey:(id)arg1 identifier:(id)arg2 ;
+(id)contactPropertyWithContactNoCopy:(id)arg0 propertyKey:(id)arg1 identifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)sourceContact;
-(int)multiValueIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif