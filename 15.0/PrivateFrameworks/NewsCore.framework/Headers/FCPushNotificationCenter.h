// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCPUSHNOTIFICATIONCENTER_H
#define FCPUSHNOTIFICATIONCENTER_H

@class NSMapTable, NSString;
@protocol FCPushNotificationHandling;

#import <Foundation/Foundation.h>

#import "FCCKPrivateDatabase.h"

@interface FCPushNotificationCenter : NSObject <FCPushNotificationHandling>

 {
    BOOL _syncingEnabled;
    FCCKPrivateDatabase *_privateDatabase;
    NSMapTable *_recordZoneObservers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)handleRemoteNotification:(id)arg0 completionHandler:(id)arg1 ;
-(void)prepareForUse;


@end


#endif