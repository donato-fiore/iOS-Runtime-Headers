// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSHIDUISENSORMODE_H
#define BKSHIDUISENSORMODE_H

@class NSString, NSSet;
@protocol BSDescriptionStreamable;

#import <Foundation/Foundation.h>


@interface BKSHIDUISensorMode : NSObject <BSDescriptionStreamable>

 {
    NSString *_reason;
    NSInteger _versionedPID;
    NSUInteger _changeSource;
    int _proximityDetectionMode;
    BOOL _digitizerEnabled;
    BOOL _pocketTouchesExpected;
    BOOL _estimatedProximityMode;
    BOOL _postEventWithCurrentDetectionMask;
}


@property (readonly, nonatomic) BOOL alwaysOnGesturesEnabled;
@property (readonly, nonatomic) NSUInteger changeSource;
@property (readonly, nonatomic) BOOL coverGestureEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL digitizerEnabled;
@property (readonly, nonatomic) BOOL estimatedProximityMode;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *multitouchHostStateKeys; // ivar: _multitouchHostStateKeys
@property (readonly, nonatomic) BOOL pocketTouchesExpected;
@property (readonly, nonatomic) BOOL postEventWithCurrentDetectionMask;
@property (readonly, nonatomic) int proximityDetectionMode;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic, getter=isRestrictedToSystemShell) BOOL restrictedToSystemShell;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL tapToWakeEnabled;
@property (readonly, nonatomic) NSInteger versionedPID;


+(id)_prevailingMode:(id)arg0 ;
+(id)buildModeForReason:(id)arg0 builder:(id)arg1 ;
+(id)new;
+(id)protobufSchema;
-(BOOL)_settingKeysAllowed:(id)arg0 ;
-(BOOL)isEffectivelyEqualToMode:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_comparisonScore;
-(id)_init;
-(id)_initCopyFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)didFinishProtobufDecodingWithError:(*id)arg0 ;
-(id)init;
-(id)initForProtobufDecoding;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopy;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif