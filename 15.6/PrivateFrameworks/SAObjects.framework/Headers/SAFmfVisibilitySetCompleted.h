// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAFMFVISIBILITYSETCOMPLETED_H
#define SAFMFVISIBILITYSETCOMPLETED_H

@class NSString, NSURL;
@protocol SAServerBoundCommand;


#import "SADomainCommand.h"

@interface SAFmfVisibilitySetCompleted : SADomainCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSURL *searchContext;
@property (readonly) Class superclass;


+(id)visibilitySetCompleted;
+(id)visibilitySetCompletedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif