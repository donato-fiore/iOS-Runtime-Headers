// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCCKSYNCENGINE_H
#define VCCKSYNCENGINE_H

@class CKSyncEngine;
@protocol VCCKSyncEngineDataSource;



@interface VCCKSyncEngine : CKSyncEngine

@property (readonly, weak, nonatomic) NSObject<VCCKSyncEngineDataSource> *dataSource;


-(void)didReceiveDatabaseNotification:(id)arg0 ;


@end


#endif