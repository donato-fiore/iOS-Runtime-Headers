// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCPLAYBACKDEFAULTSIMPLEMENTATION_H
#define MPCPLAYBACKDEFAULTSIMPLEMENTATION_H

@class MPPlaybackUserDefaults;
@protocol MFPlaybackDefaults;

#import <Foundation/Foundation.h>


@interface MPCPlaybackDefaultsImplementation : NSObject <MFPlaybackDefaults>



@property (readonly, nonatomic) BOOL allowScreenRecording;
@property (readonly, nonatomic) BOOL shouldPreroll;
@property (retain, nonatomic) MPPlaybackUserDefaults *userDefaults; // ivar: _userDefaults


-(id)initWithPlaybackUserDefaults:(id)arg0 ;


@end


#endif