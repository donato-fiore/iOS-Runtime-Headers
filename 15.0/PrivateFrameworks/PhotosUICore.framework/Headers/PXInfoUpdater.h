// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXINFOUPDATER_H
#define PXINFOUPDATER_H

@class NSProgress, NSString;
@protocol PXInfoProvider, PXInfoUpdaterObserver;

#import <Foundation/Foundation.h>


@interface PXInfoUpdater : NSObject {
    ? _infoProviderRespondsTo;
    ? _observerRespondsTo;
}


@property (nonatomic) NSInteger currentUpdateGeneration; // ivar: _currentUpdateGeneration
@property (nonatomic) NSInteger currentUpdatePriority; // ivar: _currentUpdatePriority
@property (retain, nonatomic) NSProgress *currentUpdateProgress; // ivar: _currentUpdateProgress
@property (retain, nonatomic) id *info; // ivar: _info
@property (readonly, copy, nonatomic) NSString *infoKind; // ivar: _infoKind
@property (readonly, weak, nonatomic) NSObject<PXInfoProvider> *infoProvider; // ivar: _infoProvider
@property (nonatomic) BOOL isUpdatingInfo; // ivar: _isUpdatingInfo
@property (weak, nonatomic) NSObject<PXInfoUpdaterObserver> *observer; // ivar: _observer
@property (nonatomic) BOOL shouldUpdateInfo; // ivar: _shouldUpdateInfo


-(id)init;
-(id)initWithInfoProvider:(id)arg0 infoKind:(id)arg1 ;
-(void)_handleCurrentUpdateWithInfo:(id)arg0 generation:(NSInteger)arg1 ;
-(void)_updateInfo;
-(void)_updateInfoIfNeeded;
-(void)invalidateInfo;
-(void)performBlockWhenDoneUpdating:(id)arg0 ;


@end


#endif