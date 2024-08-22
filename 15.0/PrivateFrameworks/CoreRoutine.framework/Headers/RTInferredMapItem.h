// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTINFERREDMAPITEM_H
#define RTINFERREDMAPITEM_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RTMapItem.h"

@interface RTInferredMapItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) RTMapItem *mapItem; // ivar: _mapItem
@property (readonly, nonatomic) NSUInteger source; // ivar: _source


+(BOOL)hasKnownTypeItem:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(CGFloat)consolidatedConfidenceFromConfidences:(id)arg0 ;
+(NSUInteger)consolidatedSourceFromInferredMapItems:(id)arg0 ;
+(id)dedupeInferredMapItems:(id)arg0 ;
+(id)heaviestMapItemFrom:(id)arg0 closestToLocation:(id)arg1 distanceCalculator:(id)arg2 error:(*id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMapItem:(id)arg0 confidence:(CGFloat)arg1 source:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif