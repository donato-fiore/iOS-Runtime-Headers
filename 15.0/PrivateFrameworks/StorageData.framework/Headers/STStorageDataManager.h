// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSTORAGEDATAMANAGER_H
#define STSTORAGEDATAMANAGER_H


#import <Foundation/Foundation.h>


@interface STStorageDataManager : NSObject



+(id)applicationRecords;
+(id)computeBundleRemappings:(id)arg0 ;
+(id)computeCategoriesForApps:(id)arg0 ;
+(id)getLocalAppId:(id)arg0 foreignAppId:(id)arg1 ;
+(id)overridesFor:(id)arg0 ;
+(id)sharedContainersFor:(id)arg0 ;
+(id)updateAppsWithPrevious:(id)arg0 usageBundles:(id)arg1 skipAppRecordBlock:(id)arg2 ;


@end


#endif