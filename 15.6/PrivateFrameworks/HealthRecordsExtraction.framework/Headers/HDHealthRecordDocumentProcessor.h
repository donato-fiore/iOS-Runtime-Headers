// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDHEALTHRECORDDOCUMENTPROCESSOR_H
#define HDHEALTHRECORDDOCUMENTPROCESSOR_H

@class NSNumber, HRSSupportedFHIRConfiguration;

#import <Foundation/Foundation.h>

#import "HDHealthRecordDocumentTypeConfiguration.h"

@interface HDHealthRecordDocumentProcessor : NSObject {
    HDHealthRecordDocumentTypeConfiguration *_configuration;
}


@property (readonly, copy, nonatomic) NSNumber *extractionRulesetVersion;
@property (readonly, copy, nonatomic) HRSSupportedFHIRConfiguration *supportedFHIRConfiguration;


-(id)_resourceObjectsBatchedPerFHIRRelease:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)processExtractionRequest:(id)arg0 error:(*id)arg1 ;
-(id)processOptInRequest:(id)arg0 redactor:(id)arg1 error:(*id)arg2 ;
-(id)processReferenceExtractionRequest:(id)arg0 error:(*id)arg1 ;


@end


#endif