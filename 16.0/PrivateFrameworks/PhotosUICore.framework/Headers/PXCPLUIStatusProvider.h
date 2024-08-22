// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCPLUISTATUSPROVIDER_H
#define PXCPLUISTATUSPROVIDER_H

@class PXObservable<PXCPLStatusProvider>, NSDate, NSString;
@protocol PXChangeObserver;


#import "PXObservable.h"
#import "PXCPLActionManager.h"
#import "PXCPLUIStatus.h"

@interface PXCPLUIStatusProvider : PXObservable <PXChangeObserver>

 {
    PXObservable<PXCPLStatusProvider> *_statusProvider;
    NSInteger _runningAction;
}


@property (readonly, nonatomic) PXCPLActionManager *actionManager; // ivar: _actionManager
@property (copy, nonatomic) NSDate *currentDateForTesting; // ivar: _currentDateForTesting
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger presentationStyle; // ivar: _presentationStyle
@property (readonly, nonatomic) PXCPLUIStatus *status; // ivar: _status
@property (readonly) Class superclass;


-(id)init;
-(id)initWithActionManager:(id)arg0 ;
-(id)initWithActionManager:(id)arg0 presentationStyle:(NSUInteger)arg1 ;
-(id)initWithActionManager:(id)arg0 statusProvider:(id)arg1 presentationStyle:(NSUInteger)arg2 ;
-(void)_performAction:(NSInteger)arg0 forCPLUIStatus:(id)arg1 ;
-(void)_resetRunningAction;
-(void)_statusDidChange:(id)arg0 ;
-(void)_updateStatus;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif