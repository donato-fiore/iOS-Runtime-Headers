// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KVDATASETBUILDER_H
#define KVDATASETBUILDER_H

@protocol KVProfileWriter;

#import <Foundation/Foundation.h>

#import "KVDatasetInfo.h"

@interface KVDatasetBuilder : NSObject {
    KVDatasetInfo *_datasetInfo;
    NSObject<KVProfileWriter> *_writer;
    unsigned int _itemCount;
}




-(BOOL)_finishWithError:(*id)arg0 ;
-(id)addItem:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithDatasetInfo:(id)arg0 writer:(id)arg1 error:(*id)arg2 ;


@end


#endif