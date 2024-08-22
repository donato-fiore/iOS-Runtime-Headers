// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15HEALTHRECORDSUI28INGESTIONSTATECHANGELISTENER_H
#define _TTC15HEALTHRECORDSUI28INGESTIONSTATECHANGELISTENER_H

@protocol HKHealthRecordsStoreIngestionStateListener;

#import <Foundation/Foundation.h>


@interface _TtC15HealthRecordsUI28IngestionStateChangeListener : NSObject <HKHealthRecordsStoreIngestionStateListener>

 {
    ? handler;
}




-(id)init;
-(void)healthRecordsStore:(id)arg0 ingestionStateDidUpdateTo:(NSInteger)arg1 ;


@end


#endif