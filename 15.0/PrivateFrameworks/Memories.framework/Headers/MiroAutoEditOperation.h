// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROAUTOEDITOPERATION_H
#define MIROAUTOEDITOPERATION_H

@class NSOperation;


#import "MiroAutoEditController.h"
#import "MiroAutoEditor.h"
#import "MiroCloudDownloader.h"
#import "MiroMemory.h"

@interface MiroAutoEditOperation : NSOperation {
    BOOL _isFinished;
    BOOL _isExecuting;
}


@property (retain) MiroAutoEditController *autoEditController; // ivar: _autoEditController
@property (retain) MiroAutoEditor *autoEditorParent; // ivar: _autoEditorParent
@property (copy) id *cleanupHandler; // ivar: _cleanupHandler
@property (retain, nonatomic) MiroCloudDownloader *cloudDownloader; // ivar: _cloudDownloader
@property (retain) MiroMemory *memory; // ivar: _memory
@property (nonatomic) CGSize naturalSize; // ivar: _naturalSize
@property (nonatomic) int requestID; // ivar: _requestID
@property BOOL shouldSave; // ivar: _shouldSave


-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(BOOL)shouldCancelOnNonLocalAssets;
-(BOOL)shouldDownload;
-(id)initWithNaturalSize:(struct CGSize )arg0 ;
-(void)finished;
-(void)performAutoEditAsynchronouslyWithNaturalSize:(struct CGSize )arg0 ;
-(void)start;


@end


#endif