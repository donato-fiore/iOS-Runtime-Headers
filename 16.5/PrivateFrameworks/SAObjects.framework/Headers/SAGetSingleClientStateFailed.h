// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAGETSINGLECLIENTSTATEFAILED_H
#define SAGETSINGLECLIENTSTATEFAILED_H

@class NSString;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"
#import "SAAceClientState.h"

@interface SAGetSingleClientStateFailed : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (retain, nonatomic) SAAceClientState *attemptedClientState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger errorCode;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)getSingleClientStateFailed;
+(id)getSingleClientStateFailedWithDictionary:(id)arg0 context:(id)arg1 ;
+(id)getSingleClientStateFailedWithErrorCode:(NSInteger)arg0 ;
+(id)getSingleClientStateFailedWithReason:(id)arg0 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;
-(id)initWithErrorCode:(NSInteger)arg0 ;
-(id)initWithReason:(id)arg0 ;


@end


#endif