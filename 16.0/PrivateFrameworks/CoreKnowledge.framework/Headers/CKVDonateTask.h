// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVDONATETASK_H
#define CKVDONATETASK_H

@class NSArray;
@protocol CKVDonatorProvider;

#import <Foundation/Foundation.h>


@interface CKVDonateTask : NSObject {
    NSObject<CKVDonatorProvider> *_donatorProvider;
    NSObject *_bridge;
    CGFloat _timeout;
    BOOL _isMultiDataset;
}


@property (readonly, nonatomic) NSArray *derivativeTaskIds; // ivar: _derivativeTaskIds


-(id)_getProviderBridge;
-(id)init;
-(id)initWithDonatorProvider:(id)arg0 datasetBridge:(id)arg1 derivativeTaskIds:(id)arg2 timeout:(CGFloat)arg3 ;
-(id)initWithDonatorProvider:(id)arg0 datasetBridge:(id)arg1 timeout:(CGFloat)arg2 derivativeTaskIds:(id)arg3 ;
-(id)initWithDonatorProvider:(id)arg0 multiDatasetBridge:(id)arg1 timeout:(CGFloat)arg2 ;
-(id)modifiedItemIdsWithDatabaseSearcher:(id)arg0 ;
-(void)_clearAllDatasets;
-(void)_clearDataset:(id)arg0 ;
-(void)_donateAllDatasets:(unsigned short)arg0 withReason:(unsigned short)arg1 completion:(id)arg2 ;
-(void)_donateDataset:(id)arg0 withType:(unsigned short)arg1 reason:(unsigned short)arg2 completion:(id)arg3 ;
-(void)clearWithReason:(unsigned short)arg0 ;
-(void)runWithType:(unsigned short)arg0 reason:(unsigned short)arg1 ;
-(void)runWithType:(unsigned short)arg0 reason:(unsigned short)arg1 completion:(id)arg2 ;


@end


#endif