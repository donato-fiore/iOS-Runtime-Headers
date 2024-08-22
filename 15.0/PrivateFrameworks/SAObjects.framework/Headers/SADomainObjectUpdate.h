// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SADOMAINOBJECTUPDATE_H
#define SADOMAINOBJECTUPDATE_H

@class NSString;
@protocol SADomainObjectCommand;


#import "SABaseClientBoundCommand.h"
#import "SADomainObject.h"

@interface SADomainObjectUpdate : SABaseClientBoundCommand <SADomainObjectCommand>



@property (retain, nonatomic) SADomainObject *addFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SADomainObject *identifier;
@property (retain, nonatomic) SADomainObject *removeFields;
@property (retain, nonatomic) SADomainObject *setFields;
@property (readonly) Class superclass;


+(id)domainObjectUpdate;
+(id)domainObjectUpdateWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif