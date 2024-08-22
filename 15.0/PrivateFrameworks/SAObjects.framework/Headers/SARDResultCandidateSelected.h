// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SARDRESULTCANDIDATESELECTED_H
#define SARDRESULTCANDIDATESELECTED_H

@class NSString;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"
#import "SARDNativeFlowContextUpdate.h"

@interface SARDResultCandidateSelected : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SARDNativeFlowContextUpdate *nativeFlowContextUpdate;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSString *selectedResultCandidateId;
@property (nonatomic) BOOL serverFallback;
@property (readonly) Class superclass;


+(id)resultCandidateSelected;
+(id)resultCandidateSelectedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif