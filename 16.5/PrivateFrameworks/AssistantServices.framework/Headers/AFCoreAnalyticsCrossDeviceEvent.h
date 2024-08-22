// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFCOREANALYTICSCROSSDEVICEEVENT_H
#define AFCOREANALYTICSCROSSDEVICEEVENT_H

@class NSString, NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AFCoreAnalyticsCrossDeviceEvent : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *nearbyDevicesLoggingID; // ivar: _nearbyDevicesLoggingID
@property (retain, nonatomic) NSMutableDictionary *nearbyDevicesPayloads; // ivar: _nearbyDevicesPayloads


-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithNearbyDevicesLoggingID:(id)arg0 ;
-(void)_setTargetedDeviceContextIdentifier:(id)arg0 withAction:(id)arg1 payload:(id)arg2 ;
-(void)addCoreAnalyticsDeviceTargetedWithContextIdentifier:(id)arg0 commandResultDescription:(id)arg1 ;
-(void)addNearbyDeviceContexts:(id)arg0 proximityInfo:(id)arg1 ;


@end


#endif