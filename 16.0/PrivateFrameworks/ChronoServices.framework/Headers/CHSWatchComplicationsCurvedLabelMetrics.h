// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSWATCHCOMPLICATIONSCURVEDLABELMETRICS_H
#define CHSWATCHCOMPLICATIONSCURVEDLABELMETRICS_H

@class NSString, BSColor;
@protocol BSXPCSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CHSWatchComplicationsCurvedLabelMetrics : NSObject <BSXPCSecureCoding, NSCopying>



@property (nonatomic) CGSize accessoryMaxSize; // ivar: _accessoryMaxSize
@property (nonatomic) CGFloat accessoryPadding; // ivar: _accessoryPadding
@property (nonatomic) NSUInteger accessoryPlacement; // ivar: _accessoryPlacement
@property (nonatomic) CGFloat centerAngle; // ivar: _centerAngle
@property (nonatomic) CGPoint circleCenter; // ivar: _circleCenter
@property (nonatomic) CGFloat circleRadius; // ivar: _circleRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL interior; // ivar: _interior
@property (nonatomic) CGFloat maximumAngularWidth; // ivar: _maximumAngularWidth
@property (readonly) Class superclass;
@property (retain, nonatomic) BSColor *textColor; // ivar: _textColor
@property (nonatomic) CGFloat tracking; // ivar: _tracking


+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithInterior:(BOOL)arg0 tracking:(CGFloat)arg1 circleCenter:(struct CGPoint )arg2 circleRadius:(CGFloat)arg3 maximumAngularWidth:(CGFloat)arg4 centerAngle:(CGFloat)arg5 fontSize:(CGFloat)arg6 textColor:(id)arg7 accessoryPlacement:(NSUInteger)arg8 accessoryPadding:(CGFloat)arg9 accessoryMaxSize:(struct CGSize )arg10 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif