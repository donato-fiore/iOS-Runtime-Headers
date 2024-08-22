// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDHEALTHRECORDSEXTRACTIONRULETRANSFORMER_H
#define HDHEALTHRECORDSEXTRACTIONRULETRANSFORMER_H


#import <Foundation/Foundation.h>


@interface HDHealthRecordsExtractionRuleTransformer : NSObject



+(id)_transformDSTU2Value:(id)arg0 rootResource:(id)arg1 extractionRule:(id)arg2 error:(*id)arg3 ;
+(id)_transformR4Value:(id)arg0 rootResource:(id)arg1 extractionRule:(id)arg2 error:(*id)arg3 ;
+(id)transformValue:(id)arg0 rootResource:(id)arg1 extractionRule:(id)arg2 error:(*id)arg3 ;


@end


#endif