// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNRECOGNIZETEXTREQUEST_H
#define VNRECOGNIZETEXTREQUEST_H

@class NSArray, NSString;
@protocol VNRequestProgressProviding;


#import "VNImageBasedRequest.h"

@interface VNRecognizeTextRequest : VNImageBasedRequest <VNRequestProgressProviding>



@property (copy, nonatomic) NSArray *customWords;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL indeterminate; // ivar: indeterminate
@property (nonatomic) float minimumTextHeight;
@property (copy, nonatomic) id *progressHandler; // ivar: progressHandler
@property (copy, nonatomic) NSArray *recognitionLanguages;
@property (nonatomic) NSInteger recognitionLevel;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesLanguageCorrection;


+(Class)configurationClass;
+(id)supportedRecognitionLanguagesForTextRecognitionLevel:(NSInteger)arg0 revision:(NSUInteger)arg1 error:(*id)arg2 ;
+(struct ? *)revisionAvailability;
-(BOOL)hasCancellationHook;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)_applicableDetectorAndOptions:(*id)arg0 loadedInSession:(id)arg1 error:(*id)arg2 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(id)sequencedRequestPreviousObservationsKey;
-(id)supportedRecognitionLanguagesAndReturnError:(*id)arg0 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;


@end


#endif