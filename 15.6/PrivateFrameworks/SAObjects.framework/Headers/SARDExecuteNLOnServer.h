// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SARDEXECUTENLONSERVER_H
#define SARDEXECUTENLONSERVER_H

@class NSArray, NSString, NSDictionary;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"
#import "SASRecognition.h"

@interface SARDExecuteNLOnServer : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSArray *aceDelegatedUserDialogActList;
@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *directAction;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SASRecognition *recognitionSausage;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSDictionary *requestExecutionParameters;
@property (copy, nonatomic) NSString *requestType;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *utterance;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif