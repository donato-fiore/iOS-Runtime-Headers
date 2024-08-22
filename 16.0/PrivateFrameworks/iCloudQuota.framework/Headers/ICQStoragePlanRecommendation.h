// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQSTORAGEPLANRECOMMENDATION_H
#define ICQSTORAGEPLANRECOMMENDATION_H

@class ACAccount;

#import <Foundation/Foundation.h>


@interface ICQStoragePlanRecommendation : NSObject

@property (retain, nonatomic) ACAccount *account; // ivar: _account


+(id)_requestQueue;
-(id)initWithAccount:(id)arg0 ;
-(void)calculateExtraQuotaNeededToSyncIsAccountFull:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif