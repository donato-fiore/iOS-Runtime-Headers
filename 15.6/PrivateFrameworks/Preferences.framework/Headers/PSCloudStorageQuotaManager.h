// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSCLOUDSTORAGEQUOTAMANAGER_H
#define PSCLOUDSTORAGEQUOTAMANAGER_H


#import <Foundation/Foundation.h>


@interface PSCloudStorageQuotaManager : NSObject



+(id)sharedManager;
-(void)getQuotaInfoForPrimaryAccountCompletion:(id)arg0 ;


@end


#endif