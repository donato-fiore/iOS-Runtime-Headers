// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SWMEDIASETTINGS_H
#define SWMEDIASETTINGS_H


#import <Foundation/Foundation.h>


@interface SWMediaSettings : NSObject

@property (readonly, nonatomic) BOOL fullScreenEnabled; // ivar: _fullScreenEnabled
@property (readonly, nonatomic) NSUInteger mediaTypesRequiringUserActionForPlayback; // ivar: _mediaTypesRequiringUserActionForPlayback


-(id)initWithMediaTypesRequiringUserActionForPlayback:(NSUInteger)arg0 fullScreenEnabled:(BOOL)arg1 ;


@end


#endif