// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKTOOLBARSPACE_H
#define TSKTOOLBARSPACE_H


#import <Foundation/Foundation.h>


@interface TSKToolbarSpace : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) CGFloat width; // ivar: _width


+(id)spaceWithWidth:(CGFloat)arg0 ;


@end


#endif