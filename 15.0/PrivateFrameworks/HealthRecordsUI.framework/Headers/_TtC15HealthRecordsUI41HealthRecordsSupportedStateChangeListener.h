// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15HEALTHRECORDSUI41HEALTHRECORDSSUPPORTEDSTATECHANGELISTENER_H
#define _TTC15HEALTHRECORDSUI41HEALTHRECORDSSUPPORTEDSTATECHANGELISTENER_H

@protocol HKHealthRecordsStoreHealthRecordsSupportedStateChangeListener;

#import <Foundation/Foundation.h>


@interface _TtC15HealthRecordsUI41HealthRecordsSupportedStateChangeListener : NSObject <HKHealthRecordsStoreHealthRecordsSupportedStateChangeListener>

 {
    ? handler;
    ? _latestChange;
}




-(id)init;
-(void)healthRecordsStore:(id)arg0 healthRecordsSupportedDidChangeTo:(BOOL)arg1 ;


@end


#endif