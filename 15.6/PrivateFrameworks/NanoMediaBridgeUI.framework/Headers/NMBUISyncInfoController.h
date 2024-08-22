// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMBUISYNCINFOCONTROLLER_H
#define NMBUISYNCINFOCONTROLLER_H

@class NSString, NMSMediaSyncInfo;
@protocol NMBUIPowerSourceInfoDelegate, OS_dispatch_source, NMBUISyncInfoControllerDataSource;

#import <Foundation/Foundation.h>

#import "NMBUIPowerSourceInfo.h"

@interface NMBUISyncInfoController : NSObject <NMBUIPowerSourceInfoDelegate>

 {
    NSObject<OS_dispatch_source> *_currentSyncInfoRequestDateTimer;
    NMBUIPowerSourceInfo *_powerSourceInfo;
}


@property (weak, nonatomic) NSObject<NMBUISyncInfoControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NMSMediaSyncInfo *syncInfo; // ivar: _syncInfo
@property (readonly, nonatomic) NSUInteger target; // ivar: _target


-(NSUInteger)downloadStateForModelObject:(id)arg0 ;
-(float)progressForModelObject:(id)arg0 ;
-(id)_bundleIdentifierForTarget;
-(id)initWithSyncInfoTarget:(NSUInteger)arg0 ;
-(id)syncStatusDetailText;
-(void)_handleMediaSyncInfoDidUpdateNotification:(id)arg0 ;
-(void)_updateVisibleCellsIfNeeded;
-(void)beginObservingSyncInfo;
-(void)dealloc;
-(void)endObservingSyncInfo;
-(void)powerSourceInfoHasExternalPowerSourceConnectedDidChange:(id)arg0 ;


@end


#endif