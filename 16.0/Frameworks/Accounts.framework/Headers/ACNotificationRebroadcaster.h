// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACNOTIFICATIONREBROADCASTER_H
#define ACNOTIFICATIONREBROADCASTER_H


#import <Foundation/Foundation.h>


@interface ACNotificationRebroadcaster : NSObject



+(id)sharedRebroadcaster;
-(id)init;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)_beginObservingAccountStoreDidChangeNotifications;
-(void)_endObservingAccountStoreDidChangeNotifications;
-(void)dealloc;


@end


#endif