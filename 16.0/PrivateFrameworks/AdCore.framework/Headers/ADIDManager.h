// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADIDMANAGER_H
#define ADIDMANAGER_H

@class NSArray;
@protocol ADIDManager_XPC;


#import "ADSingleton.h"
#import "DSIDRecord.h"

@interface ADIDManager : ADSingleton <ADIDManager_XPC>



@property (readonly, nonatomic) NSInteger PersonalizedAdsMonthResetCount;
@property (retain) DSIDRecord *activeDSIDRecord; // ivar: _activeDSIDRecord
@property (retain) NSArray *monthlyResetArray; // ivar: _monthlyResetArray


+(id)sharedInstance;
-(BOOL)loadIDs;
-(id)deviceIdentifiers;
-(id)dsidRecord:(id)arg0 fromDict:(id)arg1 ;
-(id)encryptedIDForClientType:(NSInteger)arg0 ;
-(id)idForClientType:(NSInteger)arg0 ;
-(id)init;
-(id)loadFakeRecord:(id)arg0 ;
-(id)reloadRecords:(id)arg0 ;
-(id)retrieveDeviceIDs;
-(void)forceReconcile:(id)arg0 ;
-(void)logIDs:(id)arg0 ;
-(void)reloadRecords:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif