// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVLINKSPEECHITEMCAPACITYALLOCATION_H
#define CKVLINKSPEECHITEMCAPACITYALLOCATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CKVLinkSpeechItemCapacityAllocation : NSObject

@property (readonly, nonatomic) NSUInteger dynamicCapacity; // ivar: _dynamicCapacity
@property (readonly, nonatomic) NSDictionary *dynamicItemCounts; // ivar: _dynamicItemCounts
@property (readonly, nonatomic) NSUInteger oovCapacity; // ivar: _oovCapacity
@property (readonly, nonatomic) NSDictionary *oovItemCounts; // ivar: _oovItemCounts


-(id)init;
-(id)initWithDynamicItemCounts:(id)arg0 oovItemCounts:(id)arg1 dynamicCapacity:(NSUInteger)arg2 oovCapacity:(NSUInteger)arg3 ;


@end


#endif