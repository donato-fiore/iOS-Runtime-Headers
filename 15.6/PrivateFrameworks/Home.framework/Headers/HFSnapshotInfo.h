// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFSNAPSHOTINFO_H
#define HFSNAPSHOTINFO_H

@class NSDiffableDataSourceSnapshot, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HFSnapshotInfo : NSObject

@property (retain, nonatomic) NSDiffableDataSourceSnapshot *baseSnapshot; // ivar: _baseSnapshot
@property (retain, nonatomic) NSMutableDictionary *sectionSnapshots; // ivar: _sectionSnapshots


-(id)initWithSnapshot:(id)arg0 ;


@end


#endif