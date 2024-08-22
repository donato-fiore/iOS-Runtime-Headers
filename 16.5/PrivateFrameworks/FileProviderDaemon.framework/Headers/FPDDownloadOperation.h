// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPDDOWNLOADOPERATION_H
#define FPDDOWNLOADOPERATION_H

@class FPDownloadInfo;
@protocol OS_dispatch_queue;


#import "FPDActionOperation.h"
#import "FPDCoordinator.h"

@interface FPDDownloadOperation : FPDActionOperation {
    NSObject<OS_dispatch_queue> *_queue;
    FPDCoordinator *_coordinator;
}


@property (readonly, nonatomic) FPDownloadInfo *info;


+(BOOL)_validateInfo:(id)arg0 ;
-(id)downloadInfo;
-(id)initWithActionInfo:(id)arg0 request:(id)arg1 server:(id)arg2 ;
-(void)_finishedDownloadingLocator:(id)arg0 withError:(id)arg1 ;
-(void)_setupCreatedItemForRoot:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;
-(void)sendPastUpdatesToClient:(id)arg0 ;


@end


#endif