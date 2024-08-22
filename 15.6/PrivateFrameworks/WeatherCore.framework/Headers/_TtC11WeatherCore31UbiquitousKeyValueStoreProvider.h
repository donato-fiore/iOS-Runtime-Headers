// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC11WEATHERCORE31UBIQUITOUSKEYVALUESTOREPROVIDER_H
#define _TTC11WEATHERCORE31UBIQUITOUSKEYVALUESTOREPROVIDER_H

@class SwiftObject;



@interface _TtC11WeatherCore31UbiquitousKeyValueStoreProvider : SwiftObject {
    ? lock;
    ? migrator;
    ? encryptedStore;
    ? unencryptedStore;
    ? activeStore;
    ? observers;
    ? notifyQueue;
    ? activityQueue;
}




-(void)handleLocationsChangedExternally:(id)arg0 ;
-(void)migrateToEncryptedStoreIfNeeded:(id)arg0 ;


@end


#endif