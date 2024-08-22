// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMCCYCLETIMELINEPILLCONFIGURATION_H
#define HKMCCYCLETIMELINEPILLCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface HKMCCycleTimelinePillConfiguration : NSObject

@property (readonly, nonatomic) CGFloat spacing; // ivar: _spacing
@property (readonly, nonatomic) CGFloat width; // ivar: _width


+(id)pillConfigurationWithWidth:(CGFloat)arg0 spacing:(CGFloat)arg1 ;
-(CGFloat)heightWithAspectRatio:(CGFloat)arg0 ;


@end


#endif