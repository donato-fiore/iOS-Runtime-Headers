// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSYNCANCHORRANGEMAP_H
#define HDSYNCANCHORRANGEMAP_H

@class NSMutableDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HDSyncAnchorRangeMap : NSObject <NSSecureCoding, NSCopying>

 {
    NSMutableDictionary *_anchorRangesByEntityIdentifier;
}




+(BOOL)supportsSecureCoding;
-(BOOL)getAnchorRange:(struct HDSyncAnchorRange *)arg0 forSyncEntityIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)anchorRangeCount;
-(NSUInteger)hash;
-(id)codableSyncAnchorRangeMap;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCodableSyncAnchorRangeMap:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateAnchorRangesAndEntityIdentifiersWithBlock:(id)arg0 ;
-(void)reset;
-(void)setAnchorRange:(struct HDSyncAnchorRange )arg0 forSyncEntityIdentifier:(id)arg1 ;


@end


#endif