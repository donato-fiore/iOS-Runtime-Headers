// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUWORKAROUNDSETTINGS_H
#define PUWORKAROUNDSETTINGS_H

@class PXSettings;



@interface PUWorkaroundSettings : PXSettings

@property (nonatomic) BOOL addRemoveVideoLayer; // ivar: _addRemoveVideoLayer
@property (nonatomic) BOOL shouldWorkAround54502886; // ivar: _shouldWorkAround54502886


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif