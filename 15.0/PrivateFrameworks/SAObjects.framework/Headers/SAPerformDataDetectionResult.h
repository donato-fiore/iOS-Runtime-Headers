// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAPERFORMDATADETECTIONRESULT_H
#define SAPERFORMDATADETECTIONRESULT_H

@class NSString, NSArray;
@protocol SAServerBoundCommand, SAAceSerializable;


#import "SABaseCommand.h"

@interface SAPerformDataDetectionResult : SABaseCommand <SAServerBoundCommand, SAAceSerializable>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detectionTarget;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *matches;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)performDataDetectionResult;
+(id)performDataDetectionResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif