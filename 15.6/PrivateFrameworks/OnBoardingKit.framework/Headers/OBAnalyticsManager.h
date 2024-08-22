// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OBANALYTICSMANAGER_H
#define OBANALYTICSMANAGER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface OBAnalyticsManager : NSObject

@property (retain, nonatomic) NSMutableArray *events; // ivar: _events
@property BOOL shouldStashMetrics; // ivar: _shouldStashMetrics


+(id)sharedManager;
-(id)init;
-(void)addEvent:(id)arg0 ;
-(void)addEvent:(id)arg0 withPayload:(id)arg1 ;
-(void)commit;
-(void)logPresentationOfPrivacyLinkWithIdentifier:(id)arg0 ;
-(void)logPresentationOfPrivacySplashWithIdentifier:(id)arg0 ;
-(void)logPresentationOfPrivacyUnifiedAbout;
-(void)logTapOnPrivacyLinkWithIdentifier:(id)arg0 ;


@end


#endif