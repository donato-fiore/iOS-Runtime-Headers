// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKUSERDOMAINCONCEPTSEMANTICIDENTIFIER_H
#define HKUSERDOMAINCONCEPTSEMANTICIDENTIFIER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "HKUserDomainConceptTypeIdentifier.h"

@interface HKUserDomainConceptSemanticIdentifier : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) HKUserDomainConceptTypeIdentifier *typeIdentifier; // ivar: _typeIdentifier


+(id)semanticIdentifierWithComponents:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithTypeIdentifier:(id)arg0 ;


@end


#endif