// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCDOSDATAOUTPUTSTORAGE_H
#define AVCDOSDATAOUTPUTSTORAGE_H

@class AVCaptureOutput<AVCaptureDataOutputDelegateOverride>, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVCDOSDataOutputStorage : NSObject

@property (readonly, nonatomic) AVCaptureOutput<AVCaptureDataOutputDelegateOverride> *dataOutput; // ivar: _dataOutput
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue; // ivar: _delegateOverrideCallbackQueue
@property (readonly, nonatomic, getter=isLive) BOOL live;
@property (retain, nonatomic) NSMutableArray *mdoTimeStampHistoryQueue; // ivar: _mdoTimeStampHistoryQueue
@property (readonly, nonatomic) NSMutableArray *synchronizedDataQueue; // ivar: _synchronizedDataQueue
@property (retain, nonatomic) NSMutableArray *timestampAdjustmentsDataQueue; // ivar: _timestampAdjustmentsDataQueue


-(id)initWithDataOutput:(id)arg0 ;
-(void)dealloc;


@end


#endif