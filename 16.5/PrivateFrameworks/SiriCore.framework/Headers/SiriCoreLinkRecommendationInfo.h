// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRICORELINKRECOMMENDATIONINFO_H
#define SIRICORELINKRECOMMENDATIONINFO_H

@class WRM_iRATProximityRecommendationLogging, WRM_iRATInterface;

#import <Foundation/Foundation.h>


@interface SiriCoreLinkRecommendationInfo : NSObject {
    BOOL _btPreference;
    BOOL _wifiPreference;
    CGFloat _timeTaken;
    WRM_iRATProximityRecommendationLogging *_linkRecommendationMetrics;
    WRM_iRATInterface *_iRATClient;
}




-(BOOL)btPreference;
-(BOOL)wifiPreference;
-(CGFloat)timeTaken;
-(id)initWithPreferences:(BOOL)arg0 wifiPreference:(BOOL)arg1 timeTaken:(CGFloat)arg2 metrics:(id)arg3 ;
-(id)initWithQueue:(id)arg0 ;
-(id)linkMetrics;
-(void)fetchLinkMetrics:(id)arg0 ;
-(void)resetLinkMetrics;
-(void)setBTPreference:(BOOL)arg0 ;
-(void)setLinkMetrics:(id)arg0 ;
-(void)setTimeTaken:(CGFloat)arg0 ;
-(void)setWiFiPreference:(BOOL)arg0 ;


@end


#endif