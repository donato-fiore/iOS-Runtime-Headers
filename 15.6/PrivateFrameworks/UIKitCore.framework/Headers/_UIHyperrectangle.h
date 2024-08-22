// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIHYPERRECTANGLE_H
#define _UIHYPERRECTANGLE_H

@class NSString;
@protocol _UIHyperregion_Internal, _UIHyperregion, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _UIHyperrectangle : NSObject <_UIHyperregion_Internal, _UIHyperregion, NSSecureCoding, NSCopying>

 {
    *CGFloat __maximumPoint;
    *CGFloat __minimumPoint;
}


@property (readonly, nonatomic) NSUInteger _dimensions; // ivar: __dimensions
@property (readonly, nonatomic) *CGFloat _maximumPoint;
@property (readonly, nonatomic) *CGFloat _minimumPoint;
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
-(void)_mutateMaximumPoint:(id)arg0 ;
-(void)_mutateMinimumPoint:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif