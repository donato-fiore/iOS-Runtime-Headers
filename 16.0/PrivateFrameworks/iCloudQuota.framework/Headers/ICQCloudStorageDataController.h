// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQCLOUDSTORAGEDATACONTROLLER_H
#define ICQCLOUDSTORAGEDATACONTROLLER_H

@class ACAccount;

#import <Foundation/Foundation.h>


@interface ICQCloudStorageDataController : NSObject {
    ACAccount *_account;
}


@property (nonatomic) BOOL shouldIgnoreCache; // ivar: _shouldIgnoreCache


+(id)_requestQueue;
-(id)cachedStorageSummary;
-(id)initWithAccount:(id)arg0 ;
-(void)fetchBackupinfoWithCompletion:(id)arg0 ;
-(void)fetchStorageByApp:(id)arg0 completion:(id)arg1 ;
-(void)fetchStorageSummaryWithCompletion:(id)arg0 ;
-(void)sendDismissStatusForTip:(id)arg0 completion:(id)arg1 ;
-(void)sendDisplayStatusForTip:(id)arg0 completion:(id)arg1 ;


@end


#endif