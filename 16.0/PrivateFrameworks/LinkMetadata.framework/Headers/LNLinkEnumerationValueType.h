// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNLINKENUMERATIONVALUETYPE_H
#define LNLINKENUMERATIONVALUETYPE_H

@class NSString;


#import "LNValueType.h"

@interface LNLinkEnumerationValueType : LNValueType

@property (readonly, copy, nonatomic) NSString *enumerationIdentifier; // ivar: _enumerationIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(Class)objectClass;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnumerationIdentifier:(id)arg0 ;
-(id)typeIdentifierAsString;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif