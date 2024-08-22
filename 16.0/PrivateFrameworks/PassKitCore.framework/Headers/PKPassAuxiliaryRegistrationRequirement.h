// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSAUXILIARYREGISTRATIONREQUIREMENT_H
#define PKPASSAUXILIARYREGISTRATIONREQUIREMENT_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPassAuxiliaryRegistrationRequirement : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger registrationBackoffCounter; // ivar: _registrationBackoffCounter
@property (readonly, nonatomic) NSUInteger role;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPassAuxiliaryRegistrationRequirement:(id)arg0 ;
-(NSUInteger)hash;
-(id)_mutableDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)_copyInto:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif