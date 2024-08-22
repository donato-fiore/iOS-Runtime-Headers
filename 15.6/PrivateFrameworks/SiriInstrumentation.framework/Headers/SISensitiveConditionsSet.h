// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISENSITIVECONDITIONSSET_H
#define SISENSITIVECONDITIONSSET_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SISensitiveConditionsSet : NSObject <NSCopying>

 {
    NSUInteger _bitmask;
}




+(id)fromConditionType:(NSUInteger)arg0 ;
-(BOOL)intersectsWith:(id)arg0 ;
-(BOOL)isConditionSet:(NSUInteger)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConditionsSet:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)differenceSetFrom:(id)arg0 ;
-(id)init;
-(id)initWithBitMask:(NSUInteger)arg0 ;
-(id)intersectionSetWith:(id)arg0 ;
-(id)unionSetWith:(id)arg0 ;
-(void)addCondition:(NSUInteger)arg0 ;
-(void)removeCondition:(NSUInteger)arg0 ;
-(void)removeConditions:(id)arg0 ;


@end


#endif