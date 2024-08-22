// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKJSRWIDEPENDENCYDOMAIN_H
#define IKJSRWIDEPENDENCYDOMAIN_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface IKJSRWIDependencyDomain : NSObject

@property (retain, nonatomic) Class agentClass; // ivar: _agentClass
@property (readonly, nonatomic) NSDictionary *commands; // ivar: _commands
@property (readonly, nonatomic) NSString *dispatcherClassString;
@property (readonly, nonatomic) NSDictionary *events; // ivar: _events
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDictionary *types; // ivar: _types


+(id)allDomains;
+(id)allowedDomains;
+(id)domainAgentClassMap;
+(void)processDomains:(id)arg0 ;
-(BOOL)isValidForAgentWithError:(*id)arg0 ;
-(BOOL)isValidForEventsWithError:(*id)arg0 ;
-(BOOL)isValidForTypesWithError:(*id)arg0 ;
-(BOOL)isValidWithError:(*id)arg0 ;
-(id)initWithDomainDictionary:(id)arg0 agentClass:(Class)arg1 ;


@end


#endif