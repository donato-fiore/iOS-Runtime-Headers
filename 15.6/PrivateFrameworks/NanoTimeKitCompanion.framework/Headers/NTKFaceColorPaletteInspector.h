// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKFACECOLORPALETTEINSPECTOR_H
#define NTKFACECOLORPALETTEINSPECTOR_H

@class NSBundle, UIColor, NSString;

#import <Foundation/Foundation.h>


@interface NTKFaceColorPaletteInspector : NSObject

@property (retain, nonatomic) NSBundle *bundleLocation; // ivar: _bundleLocation
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (retain, nonatomic) NSString *fallbackMethodName; // ivar: _fallbackMethodName
@property (nonatomic) BOOL isTritium; // ivar: _isTritium
@property (retain, nonatomic) NSString *pathLocation; // ivar: _pathLocation
@property (retain, nonatomic) NSString *pigmentName; // ivar: _pigmentName
@property (retain, nonatomic) NSString *propertyName; // ivar: _propertyName


-(id)description;


@end


#endif