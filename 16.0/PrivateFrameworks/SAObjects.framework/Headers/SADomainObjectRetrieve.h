// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SADOMAINOBJECTRETRIEVE_H
#define SADOMAINOBJECTRETRIEVE_H

@class NSString, NSArray;
@protocol SADomainObjectCommand;


#import "SABaseClientBoundCommand.h"

@interface SADomainObjectRetrieve : SABaseClientBoundCommand <SADomainObjectCommand>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *identifiers;
@property (readonly) Class superclass;


+(id)domainObjectRetrieve;
+(id)domainObjectRetrieveWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif