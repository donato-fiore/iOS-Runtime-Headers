// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMPANORAMAPAINTINGSTATUS_H
#define CAMPANORAMAPAINTINGSTATUS_H


#import <Foundation/Foundation.h>


@interface CAMPanoramaPaintingStatus : NSObject

@property (readonly, nonatomic) CGRect cropRectangle; // ivar: _cropRectangle
@property (readonly, nonatomic) CGFloat normalizedBaselineOffset; // ivar: _normalizedBaselineOffset
@property (readonly, nonatomic) CGFloat speed; // ivar: _speed


-(id)initWithSpeed:(CGFloat)arg0 cropRectangle:(struct CGRect )arg1 normalizedBaselineOffset:(CGFloat)arg2 ;


@end


#endif