// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVSIMULATEDMULTIDATASETBRIDGE_H
#define CKVSIMULATEDMULTIDATASETBRIDGE_H

@protocol CKVProviderMultiDatasetBridge;

#import <Foundation/Foundation.h>


@interface CKVSimulatedMultiDatasetBridge : NSObject <CKVProviderMultiDatasetBridge>

 {
    unsigned short _task;
}




-(id)_createDatasetInfoSummary:(NSInteger)arg0 withOriginAppId:(id)arg1 ;
-(id)datasetInfoSummaryListForTask;
-(id)init;
-(id)initWithTask:(unsigned short)arg0 ;
-(id)profileDirectory;
-(id)profileFileName;
-(void)enumerateAllDatasets:(*NSUInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif