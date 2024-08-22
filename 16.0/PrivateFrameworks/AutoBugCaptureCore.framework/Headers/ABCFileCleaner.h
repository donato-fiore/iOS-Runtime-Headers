// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABCFILECLEANER_H
#define ABCFILECLEANER_H

@class NSString, NSArray;
@protocol NetDiagnosticsShimDelegate, SymptomsFileCleanerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NetDiagnosticsShim.h"

@interface ABCFileCleaner : NSObject <NetDiagnosticsShimDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<SymptomsFileCleanerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) NSArray *filesToDelete; // ivar: _filesToDelete
@property (readonly) NSUInteger hash;
@property (retain) NetDiagnosticsShim *netDiags; // ivar: _netDiags
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 ;
-(void)cleanupFiles:(id)arg0 ;
-(void)netDiagnosticTaskStatusChangedFor:(id)arg0 toStatus:(int)arg1 ;


@end


#endif