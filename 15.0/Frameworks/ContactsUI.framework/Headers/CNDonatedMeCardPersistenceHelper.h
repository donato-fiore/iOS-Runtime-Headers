// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNDONATEDMECARDPERSISTENCEHELPER_H
#define CNDONATEDMECARDPERSISTENCEHELPER_H


#import <Foundation/Foundation.h>


@interface CNDonatedMeCardPersistenceHelper : NSObject



+(BOOL)createNewMeContact:(id)arg0 inStore:(id)arg1 ;
+(id)defaultKeysForValuesToPersist;
+(id)mutableCopyOfContact:(id)arg0 byCopyingModificationsAndValuesForKeysOnly:(id)arg1 ;
+(id)mutableCopyOfContact:(id)arg0 byCopyingValuesForKeysOnly:(id)arg1 ;
+(id)propertyGroupItemLog;


@end


#endif