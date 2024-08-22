// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVDATERANGEMETADATAGROUP_H
#define AVDATERANGEMETADATAGROUP_H

@class NSString, NSDate, NSArray;
@protocol NSCopying, NSMutableCopying;


#import "AVMetadataGroup.h"
#import "AVDateRangeMetadataGroupInternal.h"

@interface AVDateRangeMetadataGroup : AVMetadataGroup <NSCopying, NSMutableCopying>

 {
    AVDateRangeMetadataGroupInternal *_priv;
}


@property (readonly, nonatomic) NSString *cueingOptions;
@property (readonly, nonatomic, getter=_dateRangeMetadataGroupInternal) AVDateRangeMetadataGroupInternal *dateRangeMetadataGroupInternal;
@property (readonly, nonatomic) NSDate *discoveryTimestamp;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSDate *modificationTimestamp;
@property (readonly, copy, nonatomic) NSDate *startDate;


+(id)_figMetadataArrayForMetadataItems:(id)arg0 ;
+(id)_metadataItemsForFigMetadataArray:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithTaggedRangeMetadataDictionary:(id)arg0 items:(id)arg1 ;
-(id)_taggedRangeMetadataDictionary;
-(id)classifyingLabel;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithItems:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithPropertyList:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)propertyList;
-(id)uniqueID;
-(void)_extractPropertiesFromTaggedRangeMetadataDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif