// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KVJSONDATASETREADER_H
#define KVJSONDATASETREADER_H

@class NSArray, NSString;
@protocol KVDatasetReader;

#import <Foundation/Foundation.h>

#import "KVDatasetInfo.h"

@interface KVJSONDatasetReader : NSObject <KVDatasetReader>

 {
    KVDatasetInfo *_datasetInfo;
    NSArray *_items;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enumerateItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(id)datasetInfo;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;


@end


#endif