// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHHAPTICPATTERN_H
#define CHHAPTICPATTERN_H

@class NSNumber, NSString, NSMutableArray, NSDictionary, NSArray;
@protocol CHHapticPlayable;

#import <Foundation/Foundation.h>


@interface CHHapticPattern : NSObject <CHHapticPlayable>

 {
    NSNumber *_version;
    NSString *_patternID;
    NSMutableArray *_embeddedResourceInfo;
    NSMutableArray *_events;
    NSMutableArray *_parameters;
    NSMutableArray *_parameterCurves;
}


@property (readonly) NSString *audioPowerUsage;
@property (readonly, nonatomic) NSDictionary *configurationDictionary; // ivar: _configurationDictionary
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly) NSArray *events;
@property (readonly) NSString *hapticPowerUsage;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *locality;
@property (readonly) NSArray *parameterCurves;
@property (readonly) NSArray *parameters;
@property (readonly) NSString *patternID;
@property (readonly) NSString *priority;
@property (readonly) Class superclass;
@property (readonly) float version;


+(id)addHapticsForWheelsOfTime:(id)arg0 ;
+(id)eventListFromEvents:(id)arg0 parameters:(id)arg1 parameterCurves:(id)arg2 engine:(id)arg3 privileged:(BOOL)arg4 ;
+(id)patternForKey:(id)arg0 error:(*id)arg1 ;
-(id)eventListFromDictionary:(id)arg0 error:(*id)arg1 ;
-(id)exportDictionaryAndReturnError:(*id)arg0 ;
-(id)exportDictionaryWithConfigurationAndReturnError:(*id)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithEvents:(id)arg0 parameterCurves:(id)arg1 error:(*id)arg2 ;
-(id)initWithEvents:(id)arg0 parameters:(id)arg1 error:(*id)arg2 ;
-(id)resolveExternalResources:(id)arg0 error:(*id)arg1 ;


@end


#endif