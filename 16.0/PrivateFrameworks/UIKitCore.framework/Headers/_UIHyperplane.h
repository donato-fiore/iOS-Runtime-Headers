// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIHYPERPLANE_H
#define _UIHYPERPLANE_H

@class NSString;
@protocol _UIHyperregion_Internal, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _UIHyperplane : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying>

 {
    *CGFloat __point;
    *CGFloat __normal;
}


@property (readonly, nonatomic) NSUInteger _dimensions; // ivar: __dimensions
@property (readonly, nonatomic) *CGFloat _normal;
@property (readonly, nonatomic) *CGFloat _point;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingSelf;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDimensions:(NSUInteger)arg0 ;
-(void)_closestPoint:(*CGFloat)arg0 toPoint:(*CGFloat)arg1 ;
-(void)_mutateNormal:(id)arg0 ;
-(void)_mutatePoint:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif