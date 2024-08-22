// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPDMOVEWRITERTOPROVIDER_H
#define FPDMOVEWRITERTOPROVIDER_H

@protocol FPDMoveWriterExecutor, FPActionLocatorAccess;

#import <Foundation/Foundation.h>

#import "FPDMoveWriter.h"

@interface FPDMoveWriterToProvider : NSObject <FPDMoveWriterExecutor>

 {
    FPDMoveWriter *_writer;
    id<FPActionLocatorAccess> *_stopAccessingToken;
}




-(id)_remoteProxy;
-(id)_targetSession;
-(id)initWithWriter:(id)arg0 ;
-(void)_createFolder:(id)arg0 under:(id)arg1 completion:(id)arg2 ;
-(void)_createTargetItemWithProxy:(id)arg0 target:(id)arg1 contents:(id)arg2 targetName:(id)arg3 lastUsedDate:(id)arg4 completionHandler:(id)arg5 ;
// -(void)_importURL:(id)arg0 source:(id)arg1 target:(id)arg2 as:(id)arg3 lastUsedDate:(id)arg4 initialImportFinished:(id)arg5 progressAvailable:(unk)arg6 completion:(id)arg7  ;
-(void)_postImportStepForItem:(id)arg0 sourceURL:(id)arg1 targetURL:(id)arg2 tempFolder:(id)arg3 wasCopyRequested:(BOOL)arg4 error:(id)arg5 completion:(id)arg6 ;
-(void)dealloc;
-(void)performCopyOfItem:(id)arg0 to:(id)arg1 as:(id)arg2 sourceMaterializeOption:(NSUInteger)arg3 targetMaterializeOption:(NSUInteger)arg4 completion:(id)arg5 ;
-(void)performCreateFolder:(id)arg0 inside:(id)arg1 as:(id)arg2 completion:(id)arg3 ;
-(void)performMoveOfFolder:(id)arg0 to:(id)arg1 as:(id)arg2 sourceMaterializeOption:(NSUInteger)arg3 targetMaterializeOption:(NSUInteger)arg4 atomically:(BOOL)arg5 completion:(id)arg6 ;
-(void)performMoveOfItem:(id)arg0 to:(id)arg1 as:(id)arg2 sourceMaterializeOption:(NSUInteger)arg3 targetMaterializeOption:(NSUInteger)arg4 completion:(id)arg5 ;


@end


#endif