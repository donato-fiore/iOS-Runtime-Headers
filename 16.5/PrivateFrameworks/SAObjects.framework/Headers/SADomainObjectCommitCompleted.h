// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SADOMAINOBJECTCOMMITCOMPLETED_H
#define SADOMAINOBJECTCOMMITCOMPLETED_H

@class NSString, NSURL;
@protocol SAServerBoundCommand, SADomainObjectCommand;


#import "SABaseCommand.h"

@interface SADomainObjectCommitCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *identifier;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)domainObjectCommitCompleted;
+(id)domainObjectCommitCompletedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif