// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASETCARPLAYCONTEXT_H
#define SASETCARPLAYCONTEXT_H

@class NSString, NSArray;
@protocol SAClientStateServerBoundCommand;


#import "SABaseCommand.h"

@interface SASetCarPlayContext : SABaseCommand <SAClientStateServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *objects;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)setCarPlayContext;
+(id)setCarPlayContextWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif