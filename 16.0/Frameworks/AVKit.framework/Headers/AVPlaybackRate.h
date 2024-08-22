// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPLAYBACKRATE_H
#define AVPLAYBACKRATE_H

@class NSString;


#import "AVPlaybackSpeed.h"

@interface AVPlaybackRate : AVPlaybackSpeed

@property (readonly, copy, nonatomic) NSString *compactLocalizedName;


-(id)initWithRate:(CGFloat)arg0 localizedName:(id)arg1 compactLocalizedName:(id)arg2 ;
-(id)initWithRate:(CGFloat)arg0 localizedName:(id)arg1 compactLocalizedName:(id)arg2 symbolImage:(id)arg3 ;


@end


#endif