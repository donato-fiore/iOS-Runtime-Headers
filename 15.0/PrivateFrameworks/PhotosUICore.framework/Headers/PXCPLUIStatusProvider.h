// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCPLUISTATUSPROVIDER_H
#define PXCPLUISTATUSPROVIDER_H

@class PXObservable<PXCPLStatusProvider>, NSDate, NSString;
@protocol PXChangeObserver;


#import "PXObservable.h"
#import "PXCPLActionManager.h"
#import "PXCPLUIStatus.h"

@interface PXCPLUIStatusProvider : PXObservable <PXChangeObserver>

 {
    PXCPLActionManager *_actionManager;
    PXObservable<PXCPLStatusProvider> *_statusProvider;
}


@property (copy, nonatomic) NSDate *currentDateForTesting; // ivar: _currentDateForTesting
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXCPLUIStatus *status; // ivar: _status
@property (readonly) Class superclass;


-(id)init;
-(id)initWithActionManager:(id)arg0 ;
-(id)initWithActionManager:(id)arg0 statusProvider:(id)arg1 ;
-(void)_statusDidChange:(id)arg0 ;
-(void)_updateStatus;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif