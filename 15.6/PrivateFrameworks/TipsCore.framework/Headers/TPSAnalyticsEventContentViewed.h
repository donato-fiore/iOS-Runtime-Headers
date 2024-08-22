// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSANALYTICSEVENTCONTENTVIEWED_H
#define TPSANALYTICSEVENTCONTENTVIEWED_H

@class NSString, NSNumber;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventContentViewed : TPSAnalyticsEvent

@property (nonatomic) BOOL animationFinished; // ivar: _animationFinished
@property (nonatomic) CGFloat animationLoadTime; // ivar: _animationLoadTime
@property (retain, nonatomic) NSString *collectionID; // ivar: _collectionID
@property (retain, nonatomic) NSString *contentID; // ivar: _contentID
@property (retain, nonatomic) NSString *contentStyle; // ivar: _contentStyle
@property (retain, nonatomic) NSString *correlationID; // ivar: _correlationID
@property (nonatomic) BOOL hardwareWelcome; // ivar: _hardwareWelcome
@property (nonatomic) BOOL isNotificationModelControl; // ivar: _isNotificationModelControl
@property (nonatomic) BOOL seenThisContentBefore; // ivar: _seenThisContentBefore
@property (readonly, nonatomic) NSNumber *sessionViewNumber;
@property (nonatomic) BOOL softwareWelcome; // ivar: _softwareWelcome
@property (nonatomic) CGFloat timeOnScreen; // ivar: _timeOnScreen
@property (retain, nonatomic) NSString *viewMethod; // ivar: _viewMethod
@property (retain, nonatomic) NSString *viewMode; // ivar: _viewMode
@property (retain, nonatomic) NSString *widgetType; // ivar: _widgetType


+(BOOL)supportsSecureCoding;
+(BOOL)updateSessionViewNumber;
+(id)eventWithContentID:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 viewMethod:(id)arg3 contentStyle:(id)arg4 viewMode:(id)arg5 timeOnScreen:(CGFloat)arg6 animationLoadTime:(CGFloat)arg7 animationFinished:(BOOL)arg8 seenThisContentBefore:(BOOL)arg9 hardwareWelcome:(BOOL)arg10 softwareWelcome:(BOOL)arg11 ;
+(id)eventWithContentID:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 widgetType:(id)arg3 hardwareWelcome:(BOOL)arg4 softwareWelcome:(BOOL)arg5 ;
+(void)incrementSessionViewNumberForKey:(id)arg0 ;
+(void)setAppReferrer:(id)arg0 ;
-(BOOL)isWidget;
-(id)_initWithContentID:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 viewMethod:(id)arg3 contentStyle:(id)arg4 viewMode:(id)arg5 timeOnScreen:(CGFloat)arg6 animationLoadTime:(CGFloat)arg7 animationFinished:(BOOL)arg8 seenThisContentBefore:(BOOL)arg9 hardwareWelcome:(BOOL)arg10 softwareWelcome:(BOOL)arg11 ;
-(id)_initWithContentID:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 widgetType:(id)arg3 hardwareWelcome:(BOOL)arg4 softwareWelcome:(BOOL)arg5 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)log;
-(void)setDataProvider:(id)arg0 ;


@end


#endif