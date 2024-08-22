// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KVDATASET_H
#define KVDATASET_H

@protocol KVDatasetReader;

#import <Foundation/Foundation.h>


@interface KVDataset : NSObject {
    NSObject<KVDatasetReader> *_datasetReader;
}




-(BOOL)enumerateItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(id)datasetInfo;
-(id)description;
-(id)init;
-(id)initWithReader:(id)arg0 ;


@end


#endif