// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15HEALTHRECORDSUI26ACCOUNTSTATECHANGELISTENER_H
#define _TTC15HEALTHRECORDSUI26ACCOUNTSTATECHANGELISTENER_H

@protocol HKClinicalAccountStoreStateChangeListener;

#import <Foundation/Foundation.h>


@interface _TtC15HealthRecordsUI26AccountStateChangeListener : NSObject <HKClinicalAccountStoreStateChangeListener>

 {
    ? _latestChange;
    ? handler;
}




-(id)init;
-(void)clinicalAccountStore:(id)arg0 accountDidChange:(id)arg1 changeType:(NSInteger)arg2 ;


@end


#endif