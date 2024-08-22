// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXVIEWSPEC_H
#define PXVIEWSPEC_H

@class UIColor, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXViewSpec : NSObject <NSCopying>



@property (copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (copy, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (nonatomic) CGFloat borderWidth; // ivar: _borderWidth
@property (nonatomic) NSInteger compositingFilterType; // ivar: _compositingFilterType
@property (copy, nonatomic) NSString *cornerCurve; // ivar: _cornerCurve
@property (nonatomic) NSUInteger cornerMask; // ivar: _cornerMask
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGFloat displayScale; // ivar: _displayScale
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (nonatomic) CGFloat rotationAngle; // ivar: _rotationAngle
@property (copy, nonatomic) UIColor *selectionHighlightColor; // ivar: _selectionHighlightColor


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif