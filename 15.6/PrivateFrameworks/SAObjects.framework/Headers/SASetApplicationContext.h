// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASETAPPLICATIONCONTEXT_H
#define SASETAPPLICATIONCONTEXT_H

@class NSString, NSArray;
@protocol SAClientStateServerBoundCommand;


#import "SABaseCommand.h"

@interface SASetApplicationContext : SABaseCommand <SAClientStateServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *orderedContext;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)setApplicationContext;
+(id)setApplicationContextWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif