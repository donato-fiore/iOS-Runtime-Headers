// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBDIGITIZERFILTER_H
#define CBDIGITIZERFILTER_H

@class NSMutableArray;


#import "CBFilter.h"
#import "__Hotspot.h"

@interface CBDigitizerFilter : CBFilter {
    BOOL _firstDigitizerEvent;
    float _digitizerWidth;
    float _digitizerHeight;
    float _deviceCenterX;
    float _deviceCenterY;
    BOOL _touchEnabled;
    float _touchHotSpotRadiusCM;
    float _touchHotSpotSquared;
    __Hotspot *_hotspotOverride;
    NSMutableArray *_hotspots;
}


@property (nonatomic, getter=isObstructed) BOOL obstructed; // ivar: _obstructed
@property int orientation; // ivar: _orientation


-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(id)filterEvent:(id)arg0 ;
-(id)handleALSEvent:(id)arg0 ;
-(id)handleDigitizerEvent:(id)arg0 ;
-(id)initWithOrientation:(int)arg0 ;
-(id)newHotspotForOrientation:(int)arg0 ;
-(void)dealloc;
-(void)initDigitizerProperties;
-(void)loadTouchProperties:(struct __IOHIDServiceClient *)arg0 ;
-(void)overrideHotspotWithCenterX:(float)arg0 andCenterY:(float)arg1 ;
-(void)setTriggered:(int)arg0 forHotspot:(id)arg1 ;


@end


#endif