// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKEXPLORERDOTLAYOUTCONSTRAINTS_H
#define NTKEXPLORERDOTLAYOUTCONSTRAINTS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NTKExplorerDotLayoutConstraints : NSObject <NSCopying, NSSecureCoding>



@property CGFloat dotBorderWidth; // ivar: _dotBorderWidth
@property CGFloat dotDiameter; // ivar: _dotDiameter
@property CGFloat dotSpacing; // ivar: _dotSpacing
@property CGFloat noServiceDotHeight; // ivar: _noServiceDotHeight


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLayoutConstraints:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif