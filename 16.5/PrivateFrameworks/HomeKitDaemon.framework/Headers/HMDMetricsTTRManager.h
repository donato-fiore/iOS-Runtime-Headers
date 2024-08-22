// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMETRICSTTRMANAGER_H
#define HMDMETRICSTTRMANAGER_H

@class NSString;
@protocol RadarDialogPresenting, HMDMetricsTTRDataStoring, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDUIDialogPresenter.h"

@interface HMDMetricsTTRManager : NSObject <RadarDialogPresenting>



@property (readonly, nonatomic) NSObject<HMDMetricsTTRDataStoring> *dataStore; // ivar: _dataStore
@property (readonly, nonatomic) id *dateFactory; // ivar: _dateFactory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMDUIDialogPresenter *dialog; // ivar: _dialog
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithDialog:(id)arg0 workQueue:(id)arg1 ;
-(id)initWithDialog:(id)arg0 workQueue:(id)arg1 dataStore:(id)arg2 dateFactory:(id)arg3 ;
-(void)presentRadarDialogForCategory:(id)arg0 ;


@end


#endif