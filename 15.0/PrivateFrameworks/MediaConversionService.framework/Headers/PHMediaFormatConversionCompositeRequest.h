// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHMEDIAFORMATCONVERSIONCOMPOSITEREQUEST_H
#define PHMEDIAFORMATCONVERSIONCOMPOSITEREQUEST_H



#import "PHMediaFormatConversionRequest.h"

@interface PHMediaFormatConversionCompositeRequest : PHMediaFormatConversionRequest



-(BOOL)areAllSubrequestsPreflighted;
-(BOOL)isCompositeRequest;
-(BOOL)requiresAccessibilityDescriptionMetadataChange;
-(BOOL)requiresCaptionMetadataChange;
-(BOOL)requiresCreationDateMetadataChange;
-(BOOL)requiresFormatConversion;
-(BOOL)requiresLocationMetadataChange;
-(id)compositeRequestCommonInitWithError:(*id)arg0 ;
-(void)didFinishProcessing;
-(void)didPreflightSubrequest:(id)arg0 ;
-(void)enqueueSubrequestsOnConversionManager:(id)arg0 ;
-(void)enumerateSubrequests:(id)arg0 ;
-(void)postProcessSuccessfulCompositeRequest;
-(void)preflightWithConversionManager:(id)arg0 ;
-(void)propagateRequestOptionsToSubrequests;
-(void)setupProgress;


@end


#endif