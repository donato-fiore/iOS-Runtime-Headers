// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDSTRIALMANAGER_H
#define DDSTRIALMANAGER_H

@class NSString, NSMutableDictionary;
@protocol DDSTrialClientDelegate, DDSTrialManager, DDSTrialManagerDataSource, DDSTrialManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DDSTrialManager : NSObject <DDSTrialClientDelegate, DDSTrialManager>



@property (readonly) NSObject<DDSTrialManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<DDSTrialManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSMutableDictionary *trialClientByQuery; // ivar: _trialClientByQuery
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithWorkQueue:(id)arg0 ;
-(id)initWithWorkQueue:(id)arg0 dataSource:(id)arg1 ;
-(void)fetchTrialAssetForQuery:(id)arg0 callback:(id)arg1 ;
-(void)setUpTrialForQuery:(id)arg0 ;
-(void)trialClient:(id)arg0 didReceiveAsset:(id)arg1 ;
-(void)trialClientDidStop:(id)arg0 ;


@end


#endif