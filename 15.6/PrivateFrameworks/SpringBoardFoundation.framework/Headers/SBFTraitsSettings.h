// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFTRAITSSETTINGS_H
#define SBFTRAITSSETTINGS_H

@class NSString;
@protocol NSCopying, NSMutableCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBFTraitsSettingsOrientation.h"
#import "SBFTraitsSettingsZOrderLevel.h"

@interface SBFTraitsSettings : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBFTraitsSettingsOrientation *orientationSettings; // ivar: _orientationSettings
@property (readonly) Class superclass;
@property (retain, nonatomic) SBFTraitsSettingsZOrderLevel *zOrderLevelSettings; // ivar: _zOrderLevelSettings


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)initWithZOrderLevelSettings:(id)arg0 orientationSettings:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif