// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDHEALTHRECORDDOCUMENTTYPECONFIGURATION_H
#define HDHEALTHRECORDDOCUMENTTYPECONFIGURATION_H

@class NSNumber, NSArray, HRSSupportedFHIRConfiguration;

#import <Foundation/Foundation.h>


@interface HDHealthRecordDocumentTypeConfiguration : NSObject

@property (readonly, copy, nonatomic) NSNumber *extractionRulesetVersion; // ivar: _extractionRulesetVersion
@property (copy, nonatomic) NSArray *extractionRulesets; // ivar: _extractionRulesets
@property (readonly, copy, nonatomic) HRSSupportedFHIRConfiguration *supportedFHIRConfiguration;


+(id)_bundledPipelineConfigurationWithError:(*id)arg0 ;
+(id)_rulesetDictionaryFromRulesetData:(id)arg0 error:(*id)arg1 ;
+(id)configurationWithError:(*id)arg0 ;
+(id)configurationWithExtractionVersionOverride:(id)arg0 rulesetOverrides:(id)arg1 error:(*id)arg2 ;
-(id)extractionRulesetForRelease:(id)arg0 ;
-(id)initWithVersion:(id)arg0 extractionRulesets:(id)arg1 ;


@end


#endif