// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKJSRWIDEPENDENCYDOMAINTYPE_H
#define IKJSRWIDEPENDENCYDOMAINTYPE_H

@class NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "IKJSRWIDependencyDomain.h"

@interface IKJSRWIDependencyDomainType : NSObject

@property (readonly, weak, nonatomic) IKJSRWIDependencyDomain *domain; // ivar: _domain
@property (readonly, nonatomic) NSString *domainType; // ivar: _domainType
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSArray *initializationParameters; // ivar: _initializationParameters
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSDictionary *properties; // ivar: _properties
@property (readonly, nonatomic) NSString *purpose; // ivar: _purpose


-(BOOL)isInitializerValid;
-(BOOL)isValidWithError:(*id)arg0 ;
-(id)initWithTypeDictionary:(id)arg0 forDomain:(id)arg1 ;
-(id)initializationSelectorString;
-(id)initializationString;
-(id)invalidProperties;
-(id)typeImplementationStringWithSoftLinking:(BOOL)arg0 ;
-(id)typeInterfaceString;


@end


#endif