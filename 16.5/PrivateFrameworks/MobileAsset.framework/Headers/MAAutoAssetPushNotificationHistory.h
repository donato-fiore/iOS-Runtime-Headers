// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAAUTOASSETPUSHNOTIFICATIONHISTORY_H
#define MAAUTOASSETPUSHNOTIFICATIONHISTORY_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MAAutoAssetPushNotificationHistory : NSObject

@property (retain, nonatomic) NSArray *notificationHistory; // ivar: _notificationHistory


+(id)sharedInstance;
-(BOOL)_loadHistoryWithError:(*id)arg0 ;
-(BOOL)addNotificationsToHistory:(id)arg0 withError:(*id)arg1 ;
-(BOOL)clearHistoryWithError:(*id)arg0 ;
-(id)_historyURL;
-(id)init;


@end


#endif