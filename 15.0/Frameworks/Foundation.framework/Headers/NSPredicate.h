// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPREDICATE_H
#define NSPREDICATE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSPredicate : NSObject <NSSecureCoding, NSCopying>

 {
    _predicateFlags _predicateFlags;
    unsigned int reserved;
}


@property (readonly, copy) NSString *predicateFormat;


+(BOOL)supportsSecureCoding;
+(id)newStringFrom:(id)arg0 usingUnicodeTransforms:(NSUInteger)arg1 ;
+(id)predicateWithBlock:(id)arg0 ;
+(id)predicateWithFormat:(id)arg0 ;
+(id)predicateWithFormat:(id)arg0 argumentArray:(id)arg1 ;
+(id)predicateWithFormat:(id)arg0 arguments:(char *)arg1 ;
+(id)predicateWithValue:(BOOL)arg0 ;
+(struct __CFLocale *)retainedLocale;
+(void)initialize;
-(BOOL)_allowsEvaluation;
-(BOOL)evaluateWithObject:(id)arg0 ;
-(BOOL)evaluateWithObject:(id)arg0 substitutionVariables:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)generateMetadataDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)predicateWithSubstitutionVariables:(id)arg0 ;
-(void)_validateForMetadataQueryScopes:(id)arg0 ;
-(void)acceptVisitor:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)allowEvaluation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif