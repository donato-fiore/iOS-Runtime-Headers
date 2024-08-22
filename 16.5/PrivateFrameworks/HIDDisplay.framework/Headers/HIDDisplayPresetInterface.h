// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HIDDISPLAYPRESETINTERFACE_H
#define HIDDISPLAYPRESETINTERFACE_H

@class NSDictionary, NSArray;


#import "HIDDisplayInterface.h"

@interface HIDDisplayPresetInterface : HIDDisplayInterface {
    NSDictionary *_usageElementMap;
}


@property (readonly) NSArray *presets; // ivar: _presets


-(BOOL)setActivePresetIndex:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)setCurrentPresetIndex:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)setupPresets;
-(NSInteger)getActivePresetIndex:(*id)arg0 ;
-(NSInteger)getCurrentPresetIndex:(*id)arg0 ;
-(NSInteger)getFactoryDefaultPresetIndex:(*id)arg0 ;
-(id)capabilities;
-(id)getHIDDevices;
-(id)getHIDElementForUsage:(NSInteger)arg0 ;
-(id)initWithContainerID:(id)arg0 ;
-(id)initWithMatching:(id)arg0 ;
-(id)initWithService:(unsigned int)arg0 ;
-(void)createPresets;


@end


#endif