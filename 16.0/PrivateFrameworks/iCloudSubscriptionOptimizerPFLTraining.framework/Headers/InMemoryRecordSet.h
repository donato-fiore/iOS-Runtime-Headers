// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INMEMORYRECORDSET_H
#define INMEMORYRECORDSET_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface InMemoryRecordSet : NSObject

@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, nonatomic) NSArray *datas; // ivar: _datas
@property (readonly, nonatomic) NSArray *infos; // ivar: _infos


-(id)initWithRecordInfos:(id)arg0 recordDatas:(id)arg1 ;


@end


#endif