// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWATTENTIONAWARENESSCONFIGURATION_H
#define AWATTENTIONAWARENESSCONFIGURATION_H

@class NSSet, NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AWAttentionAwarenessConfiguration : NSObject <NSCopying, NSSecureCoding>

 {
    NSSet *_attentionLostTimeouts;
    NSDictionary *_attentionLostTimeoutDictionary;
    BOOL _samplingDelayExplicitlySet;
    BOOL _attentionLostEventMaskExplicitlySet;
    NSUInteger _tagIndex;
    NSSet *_allowedHIDEventsForRemoteEvent;
}


@property (nonatomic) NSUInteger attentionLostEventMask; // ivar: _attentionLostEventMask
@property (copy, nonatomic) NSDictionary *attentionLostTimeoutDictionary;
@property (copy, nonatomic) NSSet *attentionLostTimeouts;
@property (nonatomic) NSUInteger eventMask; // ivar: _eventMask
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger notificationMask; // ivar: _notificationMask
@property (nonatomic) BOOL retroactiveTimeoutMode; // ivar: _retroactiveTimeoutMode
@property (nonatomic) BOOL sampleWhileAbsent; // ivar: _sampleWhileAbsent
@property (nonatomic) CGFloat samplingDelay; // ivar: _samplingDelay
@property (nonatomic) CGFloat samplingInterval; // ivar: _samplingInterval
@property (copy, nonatomic) NSObject<NSCopying> *tag; // ivar: _tag


+(BOOL)supportsSecureCoding;
+(NSUInteger)supportedEvents;
+(id)supportedEventsString;
+(struct AWNotification_s *)notifySupportedEventsChangedWithQueue:(id)arg0 block:(id)arg1 ;
+(void)cancelNotification:(struct AWNotification_s *)arg0 ;
+(void)initialize;
-(BOOL)validateWithError:(*id)arg0 ;
-(id)allowedHIDEventsForRemoteEvent;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAllowedHIDEventsForRemoteEvent:(id)arg0 ;
-(void)setAttentionLostTimeout:(CGFloat)arg0 ;


@end


#endif