// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADISPLAY_H
#define CADISPLAY_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "CADisplayMode.h"
#import "CADisplayPreset.h"
#import "CADisplayAttributes.h"
#import "CADisplayPreferences.h"

@interface CADisplay : NSObject {
    *void _impl;
}


@property BOOL allowsVirtualModes;
@property (readonly, nonatomic) NSArray *availableModes;
@property (readonly, nonatomic) CGRect bounds;
@property (readonly, nonatomic, getter=isCloned) BOOL cloned;
@property (readonly, nonatomic, getter=isCloning) BOOL cloning;
@property (readonly, nonatomic, getter=isCloningSupported) BOOL cloningSupported;
@property (copy, nonatomic) NSString *colorMode;
@property (readonly, nonatomic) unsigned int connectionSeed;
@property (readonly, nonatomic) NSString *containerId;
@property (retain, nonatomic) CADisplayMode *currentMode;
@property (readonly, nonatomic) NSString *currentOrientation;
@property (retain, nonatomic) CADisplayPreset *currentPreset;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) unsigned int displayId;
@property (readonly, nonatomic) NSInteger displayType;
@property (readonly, nonatomic, getter=isExternal) BOOL external;
@property (readonly, nonatomic) CADisplayAttributes *externalDisplayAttributes;
@property (readonly, nonatomic) CGRect frame;
@property (readonly, nonatomic) BOOL hasNativeFrameRateRequest;
@property (readonly, nonatomic) CGFloat heartbeatRate;
@property (readonly, nonatomic) BOOL isReference;
@property (readonly, nonatomic) BOOL isReferenceLimited;
@property (nonatomic) CGFloat latency;
@property (readonly, nonatomic) int linkQuality;
@property (readonly, nonatomic) CGSize logicalScale;
@property (readonly, nonatomic) CGFloat maximumLogicalScale;
@property (readonly, nonatomic) NSInteger minimumFrameDuration;
@property (readonly, nonatomic) CGFloat minimumLogicalScale;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *nativeOrientation;
@property (readonly, nonatomic) CGSize nativeSize;
@property (readonly, nonatomic) unsigned int odLUTVersion;
@property (copy, nonatomic) NSString *overscanAdjustment;
@property (readonly, nonatomic) CGFloat overscanAmount;
@property (readonly, nonatomic) CGSize overscanAmounts;
@property (readonly, nonatomic, getter=isOverscanned) BOOL overscanned;
@property (readonly, nonatomic) CGSize physicalSize;
@property (readonly, nonatomic) NSUInteger pointScale;
@property (copy, nonatomic) CADisplayPreferences *preferences;
@property (readonly, nonatomic) CADisplayMode *preferredMode;
@property (readonly, nonatomic) int processId;
@property (readonly, nonatomic) NSString *productName;
@property (readonly, nonatomic) CGFloat refreshRate;
@property (readonly, nonatomic) CGRect safeBounds;
@property (readonly, nonatomic) unsigned int seed;
@property (readonly, nonatomic, getter=isSupported) BOOL supported;
@property (readonly, nonatomic) BOOL supportsExtendedColors;
@property (readonly, nonatomic) NSInteger tag;
@property (readonly, nonatomic) NSString *transportType;
@property (readonly, nonatomic) NSString *uniqueId;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)TVOutDisplay;
+(id)displays;
+(id)mainDisplay;
+(void)updateDisplays;
-(*void)timingsControl;
-(BOOL)setDisplayProperties:(id)arg0 ;
-(CGFloat)hardwareRefreshRate;
-(float)highestLocalPreferredFrameRateRequest;
-(id)_initWithDisplay:(*void)arg0 ;
-(id)allowedHDRModes;
-(id)availablePresets;
-(id)description;
-(id)flipBookWithCapacity:(NSUInteger)arg0 ;
-(id)flipBookWithOptions:(id)arg0 ;
-(id)immutableCopy;
-(id)preferredHDRModes;
-(id)preferredModeWithCriteria:(id)arg0 ;
-(id)supportedHDRModes;
-(void)_invalidate;
-(void)dealloc;
-(void)overrideDisplayTimings:(id)arg0 ;
-(void)overrideMinimumFrameDuration:(NSInteger)arg0 ;
-(void)update;


@end


#endif