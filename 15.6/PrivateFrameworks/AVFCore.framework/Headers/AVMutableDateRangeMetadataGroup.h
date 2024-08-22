// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMUTABLEDATERANGEMETADATAGROUP_H
#define AVMUTABLEDATERANGEMETADATAGROUP_H

@class NSDate, NSArray;


#import "AVDateRangeMetadataGroup.h"
#import "AVDateRangeMetadataGroupInternal.h"

@interface AVMutableDateRangeMetadataGroup : AVDateRangeMetadataGroup {
    AVDateRangeMetadataGroupInternal *_mutablePriv;
}


@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSDate *startDate;


-(id)_initWithTaggedRangeMetadataDictionary:(id)arg0 items:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif