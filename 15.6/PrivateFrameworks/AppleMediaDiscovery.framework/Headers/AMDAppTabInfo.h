// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMDAPPTABINFO_H
#define AMDAPPTABINFO_H

@class NSManagedObject, NSString;



@interface AMDAppTabInfo : NSManagedObject

@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *useCaseId;


+(id)deleteAllTabs:(*id)arg0 ;
+(id)deleteTabsForUseCase:(id)arg0 error:(*id)arg1 ;
+(id)fetchAllTabInfo:(*id)arg0 ;
+(id)fetchRequest;
+(id)getInfoForTab:(id)arg0 error:(*id)arg1 ;
+(id)refreshTabsForUseCase:(id)arg0 tabs:(id)arg1 error:(*id)arg2 ;
+(void)saveTabInfo:(id)arg0 error:(*id)arg1 ;


@end


#endif