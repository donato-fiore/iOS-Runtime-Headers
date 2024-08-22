// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXAPPLAUNCHCATEGORICALHISTOGRAMWITHPERSISTENTBACKUP_H
#define _ATXAPPLAUNCHCATEGORICALHISTOGRAMWITHPERSISTENTBACKUP_H

@class ATXAppLaunchCategoricalHistogram;
@protocol NSSecureCoding;


#import "ATXBackgroundSaver.h"
#import "_ATXDataStore.h"

@interface _ATXAppLaunchCategoricalHistogramWithPersistentBackup : ATXAppLaunchCategoricalHistogram <NSSecureCoding>

 {
    ATXBackgroundSaver *_saver;
}


@property (readonly, nonatomic) _ATXDataStore *datastore; // ivar: _datastore
@property (readonly, nonatomic) NSInteger histogramType; // ivar: _histogramType


-(BOOL)removeHistoryForBundleId:(id)arg0 ;
-(BOOL)removeHistoryForCategory:(id)arg0 ;
-(id)initWithDataStore:(id)arg0 histogramType:(NSInteger)arg1 ;
-(id)initWithDataStore:(id)arg0 histogramType:(NSInteger)arg1 saveOnBackgroundQueue:(id)arg2 maxCategoryCount:(unsigned short)arg3 pruningMethod:(NSInteger)arg4 ;
-(int)removeHistoryForBundleIds:(id)arg0 ;
-(void)addLaunchWithBundleId:(id)arg0 date:(id)arg1 category:(id)arg2 ;
-(void)addLaunchWithBundleId:(id)arg0 date:(id)arg1 category:(id)arg2 weight:(float)arg3 ;
-(void)flush;
-(void)resetData;
-(void)resetHistogram:(id)arg0 ;


@end


#endif