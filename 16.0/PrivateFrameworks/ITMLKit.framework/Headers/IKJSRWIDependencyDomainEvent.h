// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKJSRWIDEPENDENCYDOMAINEVENT_H
#define IKJSRWIDEPENDENCYDOMAINEVENT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "IKJSRWIDependencyDomain.h"

@interface IKJSRWIDependencyDomainEvent : NSObject

@property (readonly, weak, nonatomic) IKJSRWIDependencyDomain *domain; // ivar: _domain
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSArray *params; // ivar: _params
@property (readonly, nonatomic) NSString *purpose; // ivar: _purpose


-(BOOL)isValidWithError:(*id)arg0 ;
-(id)_eventInterfaceStringForImplementation:(BOOL)arg0 ;
-(id)eventImplementationStringWithSoftLinking:(BOOL)arg0 ;
-(id)eventInterfaceString;
-(id)initWithEventDictionary:(id)arg0 forDomain:(id)arg1 ;
-(id)selectorString;


@end


#endif