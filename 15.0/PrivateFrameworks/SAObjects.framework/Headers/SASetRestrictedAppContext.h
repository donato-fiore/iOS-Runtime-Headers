// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASETRESTRICTEDAPPCONTEXT_H
#define SASETRESTRICTEDAPPCONTEXT_H

@class NSString, NSArray;
@protocol SAClientStateServerBoundCommand;


#import "SABaseCommand.h"

@interface SASetRestrictedAppContext : SABaseCommand <SAClientStateServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *previewRestrictedApps;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)setRestrictedAppContext;
+(id)setRestrictedAppContextWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif