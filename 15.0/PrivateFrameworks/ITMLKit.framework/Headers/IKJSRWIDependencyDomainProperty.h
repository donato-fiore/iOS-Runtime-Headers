// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKJSRWIDEPENDENCYDOMAINPROPERTY_H
#define IKJSRWIDEPENDENCYDOMAINPROPERTY_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "IKJSRWIDependencyDomain.h"
#import "IKJSRWIDependencyDomainType.h"

@interface IKJSRWIDependencyDomainProperty : NSObject {
    NSString *_reference;
    NSArray *_enumOptions;
}


@property (readonly, weak, nonatomic) IKJSRWIDependencyDomain *domain; // ivar: _domain
@property (readonly, weak, nonatomic) IKJSRWIDependencyDomainType *domainType; // ivar: _domainType
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *propertyType; // ivar: _propertyType
@property (readonly, nonatomic) NSString *purpose; // ivar: _purpose
@property (readonly, nonatomic, getter=isRequired) BOOL required; // ivar: _required


+(id)propertyNameMapping;
+(id)typeMapping;
-(id)initWithPropertyDictionary:(id)arg0 ;
-(id)initWithPropertyDictionary:(id)arg0 forDomain:(id)arg1 ;
-(id)initWithPropertyDictionary:(id)arg0 forType:(id)arg1 ;
-(id)methodParameterString;
-(id)propertyDefinitionString;


@end


#endif