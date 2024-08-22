// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPDMOVEWRITERTODISK_H
#define FPDMOVEWRITERTODISK_H

@class NSFileManager;
@protocol FPDMoveWriterExecutor, FPActionLocatorAccess;

#import <Foundation/Foundation.h>

#import "FPDMoveWriter.h"

@interface FPDMoveWriterToDisk : NSObject <FPDMoveWriterExecutor>

 {
    FPDMoveWriter *_writer;
    NSFileManager *_fileManager;
    id<FPActionLocatorAccess> *_stopAccessingToken;
}




-(id)initWithWriter:(id)arg0 ;
-(void)_performCopyOfItem:(id)arg0 to:(id)arg1 as:(id)arg2 sourceMaterializeOption:(NSUInteger)arg3 targetMaterializeOption:(NSUInteger)arg4 bounceNumber:(id)arg5 completion:(id)arg6 ;
-(void)_performMoveOfItem:(id)arg0 to:(id)arg1 as:(id)arg2 sourceMaterializeOption:(NSUInteger)arg3 targetMaterializeOption:(NSUInteger)arg4 bounceNumber:(id)arg5 completion:(id)arg6 ;
-(void)_resolveLocator:(id)arg0 completion:(id)arg1 ;
-(void)_respectLastUsageDatePolicyForDestinationURL:(id)arg0 withSource:(id)arg1 ;
-(void)dealloc;
-(void)performCopyOfItem:(id)arg0 to:(id)arg1 as:(id)arg2 sourceMaterializeOption:(NSUInteger)arg3 targetMaterializeOption:(NSUInteger)arg4 completion:(id)arg5 ;
-(void)performCreateFolder:(id)arg0 inside:(id)arg1 as:(id)arg2 completion:(id)arg3 ;
-(void)performMoveOfFolder:(id)arg0 to:(id)arg1 as:(id)arg2 sourceMaterializeOption:(NSUInteger)arg3 targetMaterializeOption:(NSUInteger)arg4 atomically:(BOOL)arg5 completion:(id)arg6 ;
-(void)performMoveOfItem:(id)arg0 to:(id)arg1 as:(id)arg2 sourceMaterializeOption:(NSUInteger)arg3 targetMaterializeOption:(NSUInteger)arg4 completion:(id)arg5 ;


@end


#endif