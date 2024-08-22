// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHHAPTICEVENT_H
#define CHHAPTICEVENT_H

@class NSString, NSArray;
@protocol CHHapticPlayable;

#import <Foundation/Foundation.h>


@interface CHHapticEvent : NSObject <CHHapticPlayable>

 {
    NSUInteger _audioResID;
}


@property (readonly) NSString *audioPowerUsage;
@property (readonly) NSUInteger audioResID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat duration; // ivar: _duration
@property (readonly) NSArray *eventParameters; // ivar: _eventParams
@property (readonly) NSArray *events;
@property (readonly) CGFloat fullDuration;
@property (readonly) NSString *hapticPowerUsage;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *locality;
@property (readonly) NSArray *parameterCurves;
@property (readonly) NSArray *parameters;
@property (readonly) NSString *patternID;
@property (readonly) NSString *priority;
@property CGFloat relativeTime; // ivar: _time
@property (readonly) Class superclass;
@property (readonly) NSString *type; // ivar: _type
@property (readonly) NSString *usageCategory;


+(BOOL)parameterValuesFromLegacyEventType:(NSUInteger)arg0 sharpness:(*float)arg1 fullness:(*float)arg2 error:(*id)arg3 ;
-(id)getType;
-(id)init;
-(id)initWithAudioResourceID:(NSUInteger)arg0 parameters:(id)arg1 relativeTime:(CGFloat)arg2 ;
-(id)initWithAudioResourceID:(NSUInteger)arg0 parameters:(id)arg1 relativeTime:(CGFloat)arg2 duration:(CGFloat)arg3 ;
-(id)initWithAudioResourceIndex:(NSUInteger)arg0 parameters:(id)arg1 time:(CGFloat)arg2 duration:(CGFloat)arg3 ;
-(id)initWithEventType:(id)arg0 parameters:(id)arg1 relativeTime:(CGFloat)arg2 ;
-(id)initWithEventType:(id)arg0 parameters:(id)arg1 relativeTime:(CGFloat)arg2 duration:(CGFloat)arg3 ;
-(id)resolveExternalResources:(id)arg0 error:(*id)arg1 ;


@end


#endif