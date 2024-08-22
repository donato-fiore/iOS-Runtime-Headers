// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPCONTACTDISKCACHEHISTORYRECORDSET_H
#define PPCONTACTDISKCACHEHISTORYRECORDSET_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface PPContactDiskCacheHistoryRecordSet : NSObject

@property (readonly, nonatomic) NSMutableArray *adds; // ivar: _adds
@property (readonly, nonatomic) NSMutableArray *deletes; // ivar: _deletes
@property (readonly, nonatomic) NSString *filename; // ivar: _filename
@property (readonly, nonatomic) NSMutableArray *updates; // ivar: _updates


-(NSUInteger)hash;


@end


#endif