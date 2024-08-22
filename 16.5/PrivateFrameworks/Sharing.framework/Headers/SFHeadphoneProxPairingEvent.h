// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFHEADPHONEPROXPAIRINGEVENT_H
#define SFHEADPHONEPROXPAIRINGEVENT_H

@class NSString, NSDictionary;
@protocol SFCoreAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface SFHeadphoneProxPairingEvent : NSObject <SFCoreAnalyticsEvent>



@property (nonatomic) CGFloat assetFetchDuration; // ivar: _assetFetchDuration
@property (nonatomic) BOOL attemptedPairing; // ivar: _attemptedPairing
@property (nonatomic) unsigned char color; // ivar: _color
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (nonatomic) CGFloat foundToFirstCardDuration; // ivar: _foundToFirstCardDuration
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat pairingDuration; // ivar: _pairingDuration
@property (nonatomic) NSInteger pairingType; // ivar: _pairingType
@property (nonatomic) unsigned int productID; // ivar: _productID
@property (readonly) Class superclass;
@property (nonatomic) CGFloat triggerToFirstCardDuration; // ivar: _triggerToFirstCardDuration


+(id)eventName;
-(void)submitEvent;


@end


#endif