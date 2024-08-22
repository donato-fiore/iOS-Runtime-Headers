// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCSESSIONBANDWIDTHALLOCATIONTABLESTREAMINFO_H
#define VCSESSIONBANDWIDTHALLOCATIONTABLESTREAMINFO_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface VCSessionBandwidthAllocationTableStreamInfo : NSObject

@property (readonly, nonatomic) NSMutableDictionary *qualityIndexToTableEntry; // ivar: _qualityIndexToTableEntry
@property (readonly, nonatomic) NSArray *sortedEntries; // ivar: _sortedEntries


-(BOOL)addTableEntry:(id)arg0 ;
-(id)entryForQualityIndex:(unsigned int)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif