// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLPROXYFORCESYNCTASK_H
#define CPLPROXYFORCESYNCTASK_H



#import "CPLForceSyncTask.h"
#import "CPLProxyLibraryManager.h"

@interface CPLProxyForceSyncTask : CPLForceSyncTask

@property (retain, nonatomic) CPLProxyLibraryManager *proxyLibraryManager; // ivar: _proxyLibraryManager


-(void)cancelTask;


@end


#endif