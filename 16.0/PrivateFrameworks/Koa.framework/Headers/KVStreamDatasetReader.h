// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KVSTREAMDATASETREADER_H
#define KVSTREAMDATASETREADER_H

@class NSData, NSString;
@protocol KVDatasetReader;

#import <Foundation/Foundation.h>

#import "KVDatasetInfo.h"

@interface KVStreamDatasetReader : NSObject <KVDatasetReader>

 {
    NSData *_data;
    unsigned int _offset;
    KVDatasetInfo *_datasetInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enumerateItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(NSUInteger)offset;
-(id)datasetInfo;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;


@end


#endif