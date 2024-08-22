// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DADCLIENTACCOUNTTIMERS_H
#define DADCLIENTACCOUNTTIMERS_H

@class NSMutableDictionary, NSDate;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface DADClientAccountTimers : NSObject

@property (weak, nonatomic) NSObject<OS_dispatch_source> *deferredAllFolderContentsSource; // ivar: _deferredAllFolderContentsSource
@property (weak, nonatomic) NSObject<OS_dispatch_source> *deferredFolderContentsSource; // ivar: _deferredFolderContentsSource
@property (weak, nonatomic) NSObject<OS_dispatch_source> *deferredFolderListSource; // ivar: _deferredFolderListSource
@property (retain, nonatomic) NSMutableDictionary *folderIdToLastFolderContentsRequestDate; // ivar: _folderIdToLastFolderContentsRequestDate
@property (retain, nonatomic) NSDate *lastAllFolderContentsRequestDate; // ivar: _lastAllFolderContentsRequestDate
@property (retain, nonatomic) NSDate *lastFolderListRequestDate; // ivar: _lastFolderListRequestDate
@property (retain, nonatomic) NSDate *lastFolderWipeRequestDate; // ivar: _lastFolderWipeRequestDate


-(BOOL)allowFolderWipe;
-(CGFloat)deferredTimerInterval;
-(NSInteger)clientBehaviorForFolderContents;
-(NSInteger)clientBehaviorForFolderIds:(id)arg0 ;
-(NSInteger)clientBehaviorForFolderList;
-(void)dealloc;
-(void)killAllTimers;
-(void)setLastFolderContentRequestDate:(id)arg0 forFolderWithId:(id)arg1 ;


@end


#endif