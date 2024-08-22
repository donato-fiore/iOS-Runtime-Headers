// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SADOMAINOBJECTDELETE_H
#define SADOMAINOBJECTDELETE_H

@class NSString;
@protocol SADomainObjectCommand;


#import "SABaseClientBoundCommand.h"
#import "SADomainObject.h"

@interface SADomainObjectDelete : SABaseClientBoundCommand <SADomainObjectCommand>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SADomainObject *identifier;
@property (readonly) Class superclass;


+(id)domainObjectDelete;
+(id)domainObjectDeleteWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif