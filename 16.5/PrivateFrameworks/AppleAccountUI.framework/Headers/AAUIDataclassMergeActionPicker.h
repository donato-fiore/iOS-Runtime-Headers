// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIDATACLASSMERGEACTIONPICKER_H
#define AAUIDATACLASSMERGEACTIONPICKER_H

@class ACUIDataclassActionPicker, NSString;



@interface AAUIDataclassMergeActionPicker : ACUIDataclassActionPicker

@property (nonatomic, setter=setAnotherAccountIsSyncingDataclass:) BOOL isAnotherAccountSyncingDataclass; // ivar: _isAnotherAccountSyncingDataclass
@property (nonatomic, setter=setDataclassIsSyncingUsingExchangeOnly:) BOOL isDataclassSyncingUsingExchangeOnly; // ivar: _isDataclassSyncingUsingExchangeOnly
@property (nonatomic, setter=setPerformingBatchMerge:) BOOL isPerformingBatchMerge; // ivar: _isPerformingBatchMerge
@property (nonatomic, setter=setTetheredSyncingEnabled:) BOOL isTetheredSyncingEnabled; // ivar: _isTetheredSyncingEnabled
@property (nonatomic) BOOL localStoreHasReadOnlyCalendars; // ivar: _localStoreHasReadOnlyCalendars
@property (nonatomic) NSString *tetheredSyncingSource; // ivar: _tetheredSyncingSource


-(id)descriptionForDataclassAction:(id)arg0 ;
-(id)message;
-(id)title;


@end


#endif