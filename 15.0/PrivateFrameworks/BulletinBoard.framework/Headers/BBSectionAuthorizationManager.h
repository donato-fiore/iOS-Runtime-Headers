// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BBSECTIONAUTHORIZATIONMANAGER_H
#define BBSECTIONAUTHORIZATIONMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, BBSectionAuthorizationManagerDelegate;

#import <Foundation/Foundation.h>


@interface BBSectionAuthorizationManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_sectionIDsToAuthorizationExpiryTimers;
}


@property (weak, nonatomic) NSObject<BBSectionAuthorizationManagerDelegate> *delegate; // ivar: _delegate


-(id)handleChangeForSectionInfo:(id)arg0 replacingSectionInfo:(id)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_addNewTimerForSectionID:(id)arg0 withExpirationDate:(id)arg1 ;
-(void)_cancelExisitingTimerForSectionID:(id)arg0 ;
-(void)_queue_triggerDidFireForExpiryTimer:(id)arg0 ;
-(void)_replaceExisitingTimerForSectionID:(id)arg0 withExpirationDate:(id)arg1 ;


@end


#endif