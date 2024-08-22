// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SADOMAINOBJECT_H
#define SADOMAINOBJECT_H

@class NSString, NSURL;
@protocol SAAceIdentifiable;


#import "SABaseAceObject.h"

@interface SADomainObject : SABaseAceObject <SAAceIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *identifier;
@property (readonly) Class superclass;


+(id)domainObject;
+(id)domainObjectWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif