// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KVEMBEDDEDDATASETREADER_H
#define KVEMBEDDEDDATASETREADER_H

@class NSData, NSString;
@protocol KVDatasetReader;

#import <Foundation/Foundation.h>

#import "KVDatasetInfo.h"

@interface KVEmbeddedDatasetReader : NSObject <KVDatasetReader>

 {
    NSData *_data;
    *Dataset _dataset;
    KVDatasetInfo *_datasetInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enumerateItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(id)datasetInfo;
-(id)initWithData:(id)arg0 dataset:(struct Dataset *)arg1 error:(*id)arg2 ;


@end


#endif