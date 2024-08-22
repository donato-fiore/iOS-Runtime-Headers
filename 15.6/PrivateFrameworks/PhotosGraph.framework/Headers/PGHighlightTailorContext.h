// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGHIGHLIGHTTAILORCONTEXT_H
#define PGHIGHLIGHTTAILORCONTEXT_H

@class CLSCurationContext, PHPhotoLibrary;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "PGNeighborScoreComputer.h"
#import "PGTitleGenerationContext.h"

@interface PGHighlightTailorContext : NSObject

@property (readonly) CLSCurationContext *curationContext; // ivar: _curationContext
@property (readonly) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (readonly) PGNeighborScoreComputer *neighborScoreComputer; // ivar: _neighborScoreComputer
@property (readonly) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) PGTitleGenerationContext *titleGenerationContext; // ivar: _titleGenerationContext


-(id)initForTesting;
-(id)initWithPhotoLibrary:(id)arg0 graph:(id)arg1 loggingConnection:(id)arg2 ;


@end


#endif