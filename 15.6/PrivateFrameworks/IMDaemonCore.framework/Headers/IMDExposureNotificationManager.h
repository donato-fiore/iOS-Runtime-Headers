// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDEXPOSURENOTIFICATIONMANAGER_H
#define IMDEXPOSURENOTIFICATIONMANAGER_H


#import <Foundation/Foundation.h>


@interface IMDExposureNotificationManager : NSObject



+(id)sharedInstance;
-(BOOL)_bagDisabled;
-(BOOL)_isMessageItemEligibleForEN:(id)arg0 ;
-(id)_allowedDomains;
-(id)_enManager;
-(id)_enTextMessageForMessageBody:(id)arg0 ;
-(id)_enURLsForMessageBody:(id)arg0 ;
-(void)processMessageItemForENURL:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif