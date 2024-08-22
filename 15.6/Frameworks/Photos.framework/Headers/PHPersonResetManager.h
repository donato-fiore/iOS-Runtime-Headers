// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHPERSONRESETMANAGER_H
#define PHPERSONRESETMANAGER_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>

#import "PHPhotoLibrary.h"

@interface PHPersonResetManager : NSObject {
    PHPhotoLibrary *_library;
    NSOperationQueue *_resetOperationQueue;
}


@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (nonatomic) BOOL requiresPhotoAnalysisReset; // ivar: _requiresPhotoAnalysisReset


-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)dealloc;
-(void)resetPersons:(id)arg0 completionHandler:(id)arg1 ;
-(void)resetPersonsWithCompletionHandler:(id)arg0 ;


@end


#endif