// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SADOMAINOBJECTCREATE_H
#define SADOMAINOBJECTCREATE_H

@class NSString;
@protocol SADomainObjectCommand;


#import "SADomainCommand.h"
#import "SADomainObject.h"

@interface SADomainObjectCreate : SADomainCommand <SADomainObjectCommand>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SADomainObject *object;
@property (readonly) Class superclass;


+(id)domainObjectCreate;
+(id)domainObjectCreateWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif