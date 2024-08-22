// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPREDICTIONCONTEXT_H
#define ATXPREDICTIONCONTEXT_H

@class NSDictionary, NSString, BMInferredModeEvent, BMUserFocusComputedModeEvent;
@protocol BMStoreData, ATXProtoBufWrapper, NSSecureCoding, ATXProactiveSuggestionFeedbackContextProtocol, NSCopying;

#import <Foundation/Foundation.h>

#import "ATXPredictionAmbientLightContext.h"
#import "ATXBluetoothDuetEvent.h"
#import "ATXPredictionDeviceStateContext.h"
#import "ATXPredictionLocationMotionContext.h"
#import "ATXMicrolocationVisitDuetEvent.h"
#import "ATXPredictionTimeContext.h"
#import "ATXPredictionUserContext.h"

@interface ATXPredictionContext : NSObject <BMStoreData, ATXProtoBufWrapper, NSSecureCoding, ATXProactiveSuggestionFeedbackContextProtocol, NSCopying>



@property (retain, nonatomic) ATXPredictionAmbientLightContext *ambientLightContext; // ivar: _ambientLightContext
@property (retain, nonatomic) ATXBluetoothDuetEvent *bluetoothEvent; // ivar: _bluetoothEvent
@property (retain, nonatomic) NSDictionary *candidateIdentifiersLaunchAge; // ivar: _candidateIdentifiersLaunchAge
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ATXPredictionDeviceStateContext *deviceStateContext; // ivar: _deviceStateContext
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BMInferredModeEvent *inferredModeEvent; // ivar: _inferredModeEvent
@property (nonatomic) BOOL isOverridden; // ivar: _isOverridden
@property (retain, nonatomic) ATXPredictionLocationMotionContext *locationMotionContext; // ivar: _locationMotionContext
@property (retain, nonatomic) ATXMicrolocationVisitDuetEvent *microlocationVisitEvent; // ivar: _microlocationVisitEvent
@property (retain, nonatomic) NSString *poiCategory; // ivar: _poiCategory
@property (readonly) Class superclass;
@property (retain, nonatomic) ATXPredictionTimeContext *timeContext; // ivar: _timeContext
@property (retain, nonatomic) ATXPredictionUserContext *userContext; // ivar: _userContext
@property (retain, nonatomic) BMUserFocusComputedModeEvent *userFocusComputedModeEvent; // ivar: _userFocusComputedModeEvent


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXPredictionContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeAsProto;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceStateContext:(id)arg0 timeContext:(id)arg1 locationMotionContext:(id)arg2 ambientLightContext:(id)arg3 userContext:(id)arg4 ;
-(id)initWithDeviceStateContext:(id)arg0 timeContext:(id)arg1 locationMotionContext:(id)arg2 ambientLightContext:(id)arg3 userContext:(id)arg4 isOverridden:(BOOL)arg5 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateTimeContextWithDate:(id)arg0 ;
-(void)updateWithInjectedContext:(id)arg0 ;


@end


#endif