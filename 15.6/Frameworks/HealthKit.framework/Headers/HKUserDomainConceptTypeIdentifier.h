// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKUSERDOMAINCONCEPTTYPEIDENTIFIER_H
#define HKUSERDOMAINCONCEPTTYPEIDENTIFIER_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKUserDomainConceptTypeIdentifier : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger code; // ivar: _code
@property (readonly, copy, nonatomic) NSString *schema; // ivar: _schema


+(BOOL)supportsSecureCoding;
+(id)baseUserDomainConceptIdentifier;
+(id)listUserDomainConceptIdentifier;
+(id)medicalUserDomainConceptIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCode:(NSInteger)arg0 schema:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif