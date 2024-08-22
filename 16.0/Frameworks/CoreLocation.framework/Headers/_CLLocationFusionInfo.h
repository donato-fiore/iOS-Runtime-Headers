// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CLLOCATIONFUSIONINFO_H
#define _CLLOCATIONFUSIONINFO_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CLLocationFusionInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat altitude; // ivar: _altitude
@property (readonly, nonatomic) ? coordinate; // ivar: _coordinate
@property (readonly, nonatomic, getter=isCoordinateFused) BOOL coordinateFused; // ivar: _coordinateFused
@property (readonly, nonatomic, getter=isCoordinateFusedWithVL) BOOL coordinateFusedWithVL; // ivar: _coordinateFusedWithVL
@property (readonly, nonatomic) CGFloat course; // ivar: _course
@property (readonly, nonatomic) CGFloat courseAccuracy; // ivar: _courseAccuracy
@property (readonly, nonatomic) CGFloat horizontalAccuracy; // ivar: _horizontalAccuracy
@property (readonly, nonatomic) int referenceFrame; // ivar: _referenceFrame
@property (readonly, nonatomic) CGFloat verticalAccuracy; // ivar: _verticalAccuracy


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoordinateFused:(BOOL)arg0 coordinateFusedWithVL:(BOOL)arg1 coordinate:(struct ? )arg2 horizontalAccuracy:(CGFloat)arg3 referenceFrame:(int)arg4 altitude:(CGFloat)arg5 verticalAccuracy:(CGFloat)arg6 course:(CGFloat)arg7 courseAccuracy:(CGFloat)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif