// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXDATARECORDSTORE_H
#define SXDATARECORDSTORE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SXDataRecordStore : NSObject

@property (readonly, nonatomic) NSArray *descriptors; // ivar: _descriptors
@property (readonly, nonatomic) NSArray *records; // ivar: _records


-(NSUInteger)numberOfRecords;
-(id)initWithJSONObject:(id)arg0 andVersion:(id)arg1 ;
-(id)initWithRecords:(id)arg0 andDescriptors:(id)arg1 ;
-(id)recordsUsingSortDescriptors:(id)arg0 ;


@end


#endif