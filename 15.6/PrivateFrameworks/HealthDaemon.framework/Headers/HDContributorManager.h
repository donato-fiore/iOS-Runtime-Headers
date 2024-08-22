// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCONTRIBUTORMANAGER_H
#define HDCONTRIBUTORMANAGER_H


#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDContributorManager : NSObject {
    HDProfile *_profile;
}




-(id)_imPreferredAccount;
-(id)_primaryAppleAccount;
-(id)contributorForReference:(id)arg0 error:(*id)arg1 ;
-(id)defaultContributorReference;
-(id)initWithProfile:(id)arg0 ;
-(id)insertOrLookupContributorEntityWithReference:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;


@end


#endif