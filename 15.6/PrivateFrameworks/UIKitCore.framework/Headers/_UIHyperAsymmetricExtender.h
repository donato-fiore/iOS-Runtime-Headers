// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIHYPERASYMMETRICEXTENDER_H
#define _UIHYPERASYMMETRICEXTENDER_H

@class NSString;
@protocol _UIHyperExtender_Internal, _UIHyperExtender, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _UIHyperAsymmetricExtender : NSObject <_UIHyperExtender_Internal, _UIHyperExtender, NSSecureCoding, NSCopying>

 {
    *CGFloat __extentBeyondMinimum;
    *CGFloat __extentBeyondMaximum;
    *CGFloat __temp;
}


@property (readonly, nonatomic) NSUInteger _dimensions; // ivar: __dimensions
@property (readonly, nonatomic) *CGFloat _extentBeyondMaximum;
@property (readonly, nonatomic) *CGFloat _extentBeyondMinimum;
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
-(void)_getExtentVector:(*CGFloat)arg0 forUnconstrainedPoint:(*CGFloat)arg1 closestPoint:(*CGFloat)arg2 ;
-(void)_mutateExtentBeyondMaximum:(id)arg0 ;
-(void)_mutateExtentBeyondMinimum:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif