// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPCONTACTNAMERECORD_H
#define PPCONTACTNAMERECORD_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PPContactNameRecord : NSObject <NSSecureCoding, NSCopying>





+(BOOL)supportsSecureCoding;
+(id)describeChangeType:(unsigned char)arg0 ;
+(id)describeSource:(unsigned char)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContactNameRecord:(id)arg0 ;
-(CGFloat)score;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)cityNames;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)firstName;
-(id)identifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 score:(CGFloat)arg1 source:(unsigned char)arg2 sourceIdentifier:(id)arg3 changeType:(unsigned char)arg4 firstName:(id)arg5 phoneticFirstName:(id)arg6 middleName:(id)arg7 phoneticMiddleName:(id)arg8 lastName:(id)arg9 phoneticLastName:(id)arg10 organizationName:(id)arg11 jobTitle:(id)arg12 nickname:(id)arg13 relatedNames:(id)arg14 streetNames:(id)arg15 cityNames:(id)arg16 ;
-(id)init_;
-(id)jobTitle;
-(id)lastName;
-(id)middleName;
-(id)nickname;
-(id)organizationName;
-(id)phoneticFirstName;
-(id)phoneticLastName;
-(id)phoneticMiddleName;
-(id)relatedNames;
-(id)sourceIdentifier;
-(id)streetNames;
-(unsigned char)changeType;
-(unsigned char)source;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif