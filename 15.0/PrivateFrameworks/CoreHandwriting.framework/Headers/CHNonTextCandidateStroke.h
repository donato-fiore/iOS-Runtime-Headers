// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHNONTEXTCANDIDATESTROKE_H
#define CHNONTEXTCANDIDATESTROKE_H

@class NSDictionary;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CHEncodedStrokeIdentifier.h"

@interface CHNonTextCandidateStroke : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, nonatomic) CGFloat boundsDiagonal; // ivar: _boundsDiagonal
@property (readonly, nonatomic) NSInteger classificationAsNonText; // ivar: _classificationAsNonText
@property (readonly, nonatomic) CGFloat containerScore; // ivar: _containerScore
@property (readonly, nonatomic) NSInteger effectiveClassification;
@property (readonly, nonatomic) CGRect enlargedBounds; // ivar: _enlargedBounds
@property (readonly, nonatomic) CGFloat lineError; // ivar: _lineError
@property (readonly, nonatomic) CGFloat lineOrientationAngle; // ivar: _lineOrientationAngle
@property (readonly, nonatomic) CGRect rotatedBounds; // ivar: _rotatedBounds
@property (readonly, retain, nonatomic) CHEncodedStrokeIdentifier *strokeIdentifier; // ivar: _strokeIdentifier
@property (readonly, nonatomic) NSInteger substrokesCount; // ivar: _substrokesCount
@property (readonly, nonatomic) CGFloat support; // ivar: _support
@property (readonly, retain, nonatomic) NSDictionary *supportByStrokeIdentifier; // ivar: _supportByStrokeIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNonTextCandidateStroke:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStroke:(id)arg0 consistingOfSubstrokes:(id)arg1 classificationAsNonText:(NSInteger)arg2 lineOrientation:(CGFloat)arg3 lineError:(CGFloat)arg4 containerScore:(CGFloat)arg5 ;
-(id)initWithStrokeIdentifier:(id)arg0 substrokesCount:(NSInteger)arg1 classificationAsNonText:(NSInteger)arg2 lineOrientation:(CGFloat)arg3 lineError:(CGFloat)arg4 containerScore:(CGFloat)arg5 bounds:(struct CGRect )arg6 boundsDiagonal:(CGFloat)arg7 enlargedBounds:(struct CGRect )arg8 rotatedBounds:(struct CGRect )arg9 supportByStrokeIdentifier:(id)arg10 support:(CGFloat)arg11 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif