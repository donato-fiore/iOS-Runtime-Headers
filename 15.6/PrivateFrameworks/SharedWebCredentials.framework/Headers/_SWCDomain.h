// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SWCDOMAIN_H
#define _SWCDOMAIN_H

@class NSString, NSNumber;
@protocol SWCRedactedDescription, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_SWCDomain.h"

@interface _SWCDomain : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding>



@property (readonly) NSString *host; // ivar: _host
@property (readonly, getter=isHostIPAddress) BOOL hostIPAddress;
@property (readonly) char modeOfOperation; // ivar: _modeOfOperation
@property (readonly) _SWCDomain *nonWildcardDomain;
@property (readonly) NSNumber *port; // ivar: _port
@property (readonly) NSString *rawValue;
@property (readonly) NSString *topLevelDomainValue;
@property (readonly, getter=isValid) BOOL valid;
@property (readonly, getter=isWildcard) BOOL wildcard; // ivar: _wildcard
@property (readonly) _SWCDomain *wildcardDomain;


+(id)appleDomain;
+(id)exampleDomain;
+(id)new;
-(BOOL)encompassesDomain:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)domainRequiringModeOfOperation:(char)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHost:(id)arg0 port:(id)arg1 wildcard:(BOOL)arg2 modeOfOperation:(char)arg3 ;
-(id)initWithString:(id)arg0 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif