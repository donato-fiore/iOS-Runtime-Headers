// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVAPPSTYLE_H
#define TVAPPSTYLE_H

@class IKColor, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TVAppStyle : NSObject

@property (retain, nonatomic) IKColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) ? borderRadius; // ivar: _borderRadius
@property (nonatomic) ? fontSize; // ivar: _fontSize
@property (nonatomic) ? height; // ivar: _height
@property (nonatomic) ? interitemSpacing; // ivar: _interitemSpacing
@property (nonatomic) ? margin; // ivar: _margin
@property (nonatomic) ? maxHeight; // ivar: _maxHeight
@property (nonatomic) ? maxWidth; // ivar: _maxWidth
@property (nonatomic) ? minHeight; // ivar: _minHeight
@property (nonatomic) ? minWidth; // ivar: _minWidth
@property (nonatomic) ? padding; // ivar: _padding
@property (copy, nonatomic) NSString *prototype; // ivar: _prototype
@property (readonly, nonatomic) NSMutableDictionary *valuesByStyle; // ivar: _valuesByStyle
@property (nonatomic) ? width; // ivar: _width


-(id)valueForStyle:(id)arg0 ;
-(void)_setValue:(id)arg0 forStyle:(id)arg1 ;


@end


#endif