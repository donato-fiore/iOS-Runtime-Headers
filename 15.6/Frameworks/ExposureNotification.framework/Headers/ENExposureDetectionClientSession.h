// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENEXPOSUREDETECTIONCLIENTSESSION_H
#define ENEXPOSUREDETECTIONCLIENTSESSION_H

@class NSMutableArray, NSMutableDictionary, NSArray, NSProgress;
@protocol CUXPCCodable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ENExposureDetectionSummary.h"
#import "ENExposureConfiguration.h"
#import "ENManager.h"

@interface ENExposureDetectionClientSession : NSObject <CUXPCCodable>

 {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _guardActivateDone;
    BOOL _guardAddFileDone;
    BOOL _guardFinishDone;
    int _runState;
    ENExposureDetectionSummary *_summary;
    NSMutableArray *_mainFileURLs;
    NSUInteger _mainFileIndex;
    NSUInteger _mainFileCount;
    NSMutableDictionary *_signatureURLMap;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) ENExposureConfiguration *configuration; // ivar: _configuration
@property (copy, nonatomic) NSArray *diagnosisKeyURLs; // ivar: _diagnosisKeyURLs
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) ENManager *manager; // ivar: _manager
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress


-(BOOL)_runActivateStart;
-(BOOL)_runAddFile;
-(BOOL)_runFinishStart;
-(id)init;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)_reportError:(id)arg0 where:(char *)arg1 ;
-(void)_run;
-(void)_runDetectionDone;
-(void)activate;
-(void)encodeWithXPCObject:(id)arg0 ;
-(void)invalidate;


@end


#endif