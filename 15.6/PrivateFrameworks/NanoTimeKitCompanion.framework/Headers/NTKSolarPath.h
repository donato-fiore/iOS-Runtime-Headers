// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKSOLARPATH_H
#define NTKSOLARPATH_H

@class UIBezierPath;

#import <Foundation/Foundation.h>

#import "NTKSolarTimeModel.h"

@interface NTKSolarPath : NSObject {
    BOOL _usePlaceholderData;
    CGPoint _points;
    CGFloat _altitude;
}


@property (readonly, nonatomic) UIBezierPath *bezierPath; // ivar: _bezierPath
@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, nonatomic) NTKSolarTimeModel *solarTimeModel; // ivar: _solarTimeModel
@property (readonly, nonatomic) BOOL verticallyFitsPathToBounds; // ivar: _verticallyFitsPathToBounds


-(CGFloat)altitudeAtPercentage:(CGFloat)arg0 ;
-(CGFloat)altitudeAtX:(CGFloat)arg0 ;
-(id)_computeSolarPath;
-(id)initWithBounds:(struct CGRect )arg0 solarTimeModel:(id)arg1 verticallyFitsPathToBounds:(BOOL)arg2 usePlaceholderData:(BOOL)arg3 ;


@end


#endif