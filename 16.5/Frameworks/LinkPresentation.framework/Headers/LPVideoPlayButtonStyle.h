// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPVIDEOPLAYBUTTONSTYLE_H
#define LPVIDEOPLAYBUTTONSTYLE_H


#import <Foundation/Foundation.h>

#import "LPSize.h"

@interface LPVideoPlayButtonStyle : NSObject

@property (retain, nonatomic) LPSize *backgroundSize; // ivar: _backgroundSize
@property (nonatomic) CGFloat disabledOpacity; // ivar: _disabledOpacity
@property (retain, nonatomic) LPSize *size; // ivar: _size


-(id)initWithPlatform:(NSInteger)arg0 ;


@end


#endif