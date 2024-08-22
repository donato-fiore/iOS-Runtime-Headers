// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIHYPERREPEATEDREGION_H
#define _UIHYPERREPEATEDREGION_H

@class NSString;
@protocol _UIHyperregion_Internal, NSSecureCoding, NSCopying, _UIHyperregion;

#import <Foundation/Foundation.h>


@interface _UIHyperrepeatedRegion : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying>

 {
    *NSUInteger __repetitions;
    *CGFloat __offset;
    *CGFloat __increment;
    *CGFloat __maximumIndices;
    ? _clean;
}


@property (readonly, nonatomic) NSUInteger _dimensions; // ivar: __dimensions
@property (readonly, nonatomic) *CGFloat _increment;
@property (readonly, nonatomic) *CGFloat _offset;
@property (retain, nonatomic, setter=_setRegion:) NSObject<_UIHyperregion> *_region; // ivar: __region
@property (readonly, nonatomic) *NSUInteger _repetitions;
@property (readonly, nonatomic) *CGFloat _temp; // ivar: __temp
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingSelf;
-(*CGFloat)_mutableMaximumIndices;
-(BOOL)_isBoundaryCrossedFromPoint:(*CGFloat)arg0 toPoint:(*CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDimensions:(NSUInteger)arg0 ;
-(void)_closestPoint:(*CGFloat)arg0 toPoint:(*CGFloat)arg1 ;
-(void)_indexOfClosestSubregion:(*CGFloat)arg0 toPoint:(*CGFloat)arg1 ;
-(void)_mutateIncrement:(id)arg0 ;
-(void)_mutateOffset:(id)arg0 ;
-(void)_mutateRepetitions:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif