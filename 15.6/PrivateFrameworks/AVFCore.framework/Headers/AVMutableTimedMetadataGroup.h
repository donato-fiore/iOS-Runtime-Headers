// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMUTABLETIMEDMETADATAGROUP_H
#define AVMUTABLETIMEDMETADATAGROUP_H

@class NSArray;


#import "AVTimedMetadataGroup.h"
#import "AVTimedMetadataGroupInternal.h"

@interface AVMutableTimedMetadataGroup : AVTimedMetadataGroup {
    AVTimedMetadataGroupInternal *_mutablePriv;
}


@property (copy, nonatomic) NSArray *items;
@property (nonatomic) ? timeRange;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithItems:(id)arg0 timeRange:(struct ? )arg1 ;


@end


#endif