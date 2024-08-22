// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14FAMILYCIRCLEUI30SUBSCRIPTIONSERVICESDATALOADER_H
#define _TTC14FAMILYCIRCLEUI30SUBSCRIPTIONSERVICESDATALOADER_H

@class FASharedService;

#import <Foundation/Foundation.h>


@interface _TtC14FamilyCircleUI30SubscriptionServicesDataLoader : NSObject {
    ? didFirstLoad;
    ? lastError;
    ? _locationAllowed;
    ? _services;
    ? _hasChanges;
    ? dataProvider;
    ? account;
    ? familyMembers;
}


@property (nonatomic, readonly) FASharedService *locationSharingService;


+(id)sharedInstance;
+(void)setSharedInstance:(id)arg0 ;
-(id)init;
-(id)initWithAccount:(id)arg0 familyMembers:(id)arg1 ;
-(void)dealloc;
-(void)firstLoad;
-(void)updateNotification;


@end


#endif