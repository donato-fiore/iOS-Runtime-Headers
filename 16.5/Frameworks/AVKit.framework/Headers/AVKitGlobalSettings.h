// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVKITGLOBALSETTINGS_H
#define AVKITGLOBALSETTINGS_H


#import <Foundation/Foundation.h>


@interface AVKitGlobalSettings : NSObject

@property (readonly, nonatomic) BOOL isQuickLook; // ivar: _isQuickLook
@property (readonly, nonatomic) BOOL playbackSpeedControlEnabled; // ivar: _playbackSpeedControlEnabled
@property (nonatomic) BOOL secondGenerationPlayerEnabled; // ivar: _secondGenerationPlayerEnabled
@property (readonly, nonatomic) BOOL visualAnalysisEnabled; // ivar: _visualAnalysisEnabled
@property (readonly, nonatomic) BOOL visualAnalysisSupported; // ivar: _visualAnalysisSupported


+(id)shared;
-(id)init;


@end


#endif