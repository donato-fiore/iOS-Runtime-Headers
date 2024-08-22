// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKJSRWIDEPENDENCYDOMAINCOMMAND_H
#define IKJSRWIDEPENDENCYDOMAINCOMMAND_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "IKJSRWIDependencyDomain.h"

@interface IKJSRWIDependencyDomainCommand : NSObject

@property (readonly, weak, nonatomic) IKJSRWIDependencyDomain *domain; // ivar: _domain
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSArray *params; // ivar: _params
@property (readonly, nonatomic) NSString *purpose; // ivar: _purpose
@property (readonly, nonatomic) NSArray *returns; // ivar: _returns


-(BOOL)isValidWithError:(*id)arg0 ;
-(id)initWithCommandDictionary:(id)arg0 forDomain:(id)arg1 ;
-(id)selectorString;


@end


#endif