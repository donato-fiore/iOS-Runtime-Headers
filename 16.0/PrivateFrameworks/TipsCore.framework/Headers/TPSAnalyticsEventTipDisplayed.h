// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSANALYTICSEVENTTIPDISPLAYED_H
#define TPSANALYTICSEVENTTIPDISPLAYED_H

@class NSString;


#import "TPSAnalyticsEvent.h"
#import "TPSExperiment.h"

@interface TPSAnalyticsEventTipDisplayed : TPSAnalyticsEvent

@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSString *context; // ivar: _context
@property (readonly, nonatomic) NSString *correlationID; // ivar: _correlationID
@property (nonatomic) NSUInteger displayCount; // ivar: _displayCount
@property (readonly, nonatomic) NSUInteger displayType; // ivar: _displayType
@property (readonly, nonatomic) TPSExperiment *experiment; // ivar: _experiment
@property (nonatomic) BOOL overrideHoldout; // ivar: _overrideHoldout
@property (readonly, nonatomic) NSString *tipID; // ivar: _tipID
@property (readonly, nonatomic) NSUInteger usageFlags; // ivar: _usageFlags


+(BOOL)supportsSecureCoding;
+(id)eventWithTipID:(id)arg0 correlationID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(NSUInteger)arg4 usageFlags:(NSUInteger)arg5 experiment:(id)arg6 overrideHoldout:(BOOL)arg7 date:(id)arg8 ;
-(id)_initWithTipID:(id)arg0 correlationID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(NSUInteger)arg4 usageFlags:(NSUInteger)arg5 experiment:(id)arg6 overrideHoldout:(BOOL)arg7 date:(id)arg8 ;
-(id)duetEvent;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDataProvider:(id)arg0 ;


@end


#endif