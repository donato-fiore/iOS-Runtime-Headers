// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SACFFLOWCOMPLETED_H
#define SACFFLOWCOMPLETED_H

@class NSString;


#import "SACFAbstractClientCommandCompleted.h"
#import "SACFProvideContext.h"

@interface SACFFlowCompleted : SACFAbstractClientCommandCompleted

@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) SACFProvideContext *updateContext;


+(id)flowCompleted;
+(id)flowCompletedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif