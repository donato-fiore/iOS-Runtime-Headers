// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SADOMAINOBJECTRETRIEVECOMPLETED_H
#define SADOMAINOBJECTRETRIEVECOMPLETED_H

@class NSString, NSArray;
@protocol SAServerBoundCommand, SADomainObjectCommand;


#import "SABaseCommand.h"

@interface SADomainObjectRetrieveCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *objects;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)domainObjectRetrieveCompleted;
+(id)domainObjectRetrieveCompletedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif