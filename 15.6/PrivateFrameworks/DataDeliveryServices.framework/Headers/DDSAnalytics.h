// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDSANALYTICS_H
#define DDSANALYTICS_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DDSAnalytics : NSObject

@property (readonly, nonatomic) NSMutableDictionary *analyticByIdentifier; // ivar: _analyticByIdentifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *analyticQueue; // ivar: _analyticQueue


+(BOOL)isInteger:(id)arg0 ;
+(id)assetDownloadDurationBuckets;
+(id)roundNumber:(id)arg0 toSignificantDigits:(id)arg1 ;
+(id)sharedInstance;
-(id)bucketForValue:(id)arg0 fromBuckets:(id)arg1 ;
-(id)init;
-(id)processName;
-(id)stringForAction:(int)arg0 ;
-(void)cancelRecordingForAsset:(id)arg0 ;
-(void)dumpAssetLogWithAssertions:(id)arg0 installedAssets:(id)arg1 ;
-(void)recordAssetAction:(int)arg0 forAsset:(id)arg1 ;
-(void)recordUpdateCycleState:(int)arg0 ;
-(void)reportAssetDownloadAnalytic:(id)arg0 ;
-(void)reportUpdateCycleAnalytic:(id)arg0 ;


@end


#endif