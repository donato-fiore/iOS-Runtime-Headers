// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOCINTENTLOCATIONRESOLUTIONRESULT_H
#define DOCINTENTLOCATIONRESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface DOCIntentLocationResolutionResult : INObjectResolutionResult



+(BOOL)supportsSecureCoding;
+(id)confirmationRequiredWithDOCIntentLocationToConfirm:(id)arg0 ;
+(id)disambiguationWithDOCIntentLocationsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedDOCIntentLocation:(id)arg0 ;


@end


#endif