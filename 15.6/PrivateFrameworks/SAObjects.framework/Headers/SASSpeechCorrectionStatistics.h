// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASSPEECHCORRECTIONSTATISTICS_H
#define SASSPEECHCORRECTIONSTATISTICS_H

@class NSString;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SASSpeechCorrectionStatistics : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (nonatomic) NSInteger alternativeSelectCount;
@property (nonatomic) NSInteger characterChangeCount;
@property (copy, nonatomic) NSString *correctionSource;
@property (copy, nonatomic) NSString *correctionText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *interactionId;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSString *sessionId;
@property (readonly) Class superclass;


+(id)speechCorrectionStatistics;
+(id)speechCorrectionStatisticsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif