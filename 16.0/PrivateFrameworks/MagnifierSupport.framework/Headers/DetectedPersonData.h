// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DETECTEDPERSONDATA_H
#define DETECTEDPERSONDATA_H


#import <Foundation/Foundation.h>


@interface DetectedPersonData : NSObject {
    ? _position;
    ? _minPosition;
    ? _maxPosition;
}


@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (readonly, nonatomic) BOOL isValid;
@property ? maxPosition;
@property ? minPosition;
@property ? position;
@property (readonly, nonatomic) CGRect screenRect; // ivar: _screenRect


-(id)initWithMinPosition:(struct CGRect )arg0 maxPositionscreenRect;
-(id)initWithNormalizedMinX:(CGFloat)arg0 maxX:(CGFloat)arg1 minY:(CGFloat)arg2 maxY:(CGFloat)arg3 depth:(float)arg4 camera:(id)arg5 orientation:(NSInteger)arg6 ;


@end


#endif