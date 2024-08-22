// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ATXAPPLAUNCHHISTOGRAMWITHPERSISTENTBACKUP_H
#define _ATXAPPLAUNCHHISTOGRAMWITHPERSISTENTBACKUP_H

@class ATXAppLaunchHistogram;
@protocol NSSecureCoding;


#import "ATXBackgroundSaver.h"
#import "_ATXDataStore.h"

@interface _ATXAppLaunchHistogramWithPersistentBackup : ATXAppLaunchHistogram <NSSecureCoding>

 {
    ATXBackgroundSaver *_saver;
}


@property (readonly, nonatomic) _ATXDataStore *datastore; // ivar: _datastore
@property (readonly, nonatomic) NSInteger histogramType; // ivar: _histogramType


-(BOOL)removeHistoryForBundleId:(id)arg0 ;
-(id)initWithDataStore:(id)arg0 histogramType:(NSInteger)arg1 ;
-(id)initWithDataStore:(id)arg0 histogramType:(NSInteger)arg1 loadFromDataStore:(BOOL)arg2 saveOnBackgroundQueue:(id)arg3 ;
-(id)initWithDataStore:(id)arg0 histogramType:(NSInteger)arg1 saveOnBackgroundQueue:(id)arg2 ;
-(int)removeHistoryForBundleIds:(id)arg0 ;
-(void)addLaunchWithBundleId:(id)arg0 date:(id)arg1 timeZone:(id)arg2 ;
-(void)addLaunchWithBundleId:(id)arg0 date:(id)arg1 timeZone:(id)arg2 weight:(float)arg3 ;
-(void)addLaunchWithBundleId:(id)arg0 elapsedTime:(CGFloat)arg1 ;
-(void)addLaunchWithBundleId:(id)arg0 elapsedTime:(CGFloat)arg1 weight:(float)arg2 ;
-(void)decayByFactor:(CGFloat)arg0 ;
-(void)decayWithHalfLifeInDays:(CGFloat)arg0 ;
-(void)flush;
-(void)removeLaunchWithBundleId:(id)arg0 date:(id)arg1 timeZone:(id)arg2 weight:(float)arg3 ;
-(void)resetData;


@end


#endif