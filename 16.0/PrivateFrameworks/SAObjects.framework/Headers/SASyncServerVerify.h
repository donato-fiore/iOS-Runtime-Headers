// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASYNCSERVERVERIFY_H
#define SASYNCSERVERVERIFY_H

@class NSString;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SASyncServerVerify : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fetchSyncDebugInfo;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL performInternalVerification;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)serverVerify;
+(id)serverVerifyWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif