// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BYANALYTICSEVENTRECOMMENDEDLOCALE_H
#define BYANALYTICSEVENTRECOMMENDEDLOCALE_H


#import <Foundation/Foundation.h>


@interface BYAnalyticsEventRecommendedLocale : NSObject

@property (nonatomic) CGFloat durationOfWiFiScan; // ivar: _durationOfWiFiScan
@property (nonatomic) NSUInteger source; // ivar: _source
@property (nonatomic) BOOL userSawRecommendedLocale; // ivar: _userSawRecommendedLocale
@property (nonatomic) BOOL userVisitedLocalePane; // ivar: _userVisitedLocalePane


+(id)sharedInstance;
-(id)eventPayload;
-(id)init;


@end


#endif