// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIALIGNMENTREGION_H
#define _UIALIGNMENTREGION_H

@class NSString;
@protocol _UIHyperregion_Internal, NSSecureCoding, NSCopying, _UIHyperregion;

#import <Foundation/Foundation.h>


@interface _UIAlignmentRegion : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger _dimensions; // ivar: __dimensions
@property (nonatomic, setter=_setMaximumDistance:) CGFloat _maximumDistance; // ivar: __maximumDistance
@property (retain, nonatomic, setter=_setRegion:) NSObject<_UIHyperregion> *_region; // ivar: __region
@property (readonly, nonatomic) *CGFloat _temp; // ivar: __temp
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingSelf;
-(BOOL)_isAlignedForClosestPoint:(*CGFloat)arg0 toPoint:(*CGFloat)arg1 ;
-(BOOL)_isBoundaryCrossedFromPoint:(*CGFloat)arg0 toPoint:(*CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDimensions:(NSUInteger)arg0 ;
-(void)_closestPoint:(*CGFloat)arg0 toPoint:(*CGFloat)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif