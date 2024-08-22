// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DACONTAINERPROVIDER_H
#define DACONTAINERPROVIDER_H


#import <Foundation/Foundation.h>


@interface DAContainerProvider : NSObject



+(id)providerWithAddressBook:(*void)arg0 ;
+(id)providerWithContactStore:(id)arg0 ;
-(BOOL)setLastSyncDateForContainer:(id)arg0 ;
-(id)allContainers;
-(id)allContainersForAccountWithExternalIdentifier:(id)arg0 ;
-(id)containerWithExternalIdentifier:(id)arg0 forAccountWithExternalIdentifier:(id)arg1 ;
-(id)createNewContainerWithType:(int)arg0 name:(id)arg1 externalIdentifier:(id)arg2 constraintsPath:(id)arg3 syncData:(id)arg4 contentReadonly:(BOOL)arg5 propertiesReadonly:(BOOL)arg6 forAccount:(id)arg7 ;
-(void)mergeAllRecordsIntoContainer:(id)arg0 shouldInsertChangeHistoryRecords:(BOOL)arg1 ;
-(void)setDefaultContainer:(id)arg0 withLocalDBHelper:(id)arg1 onlyIfNotSet:(BOOL)arg2 ;


@end


#endif