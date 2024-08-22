// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLPROXYRESOURCETRANSFERTASK_H
#define CPLPROXYRESOURCETRANSFERTASK_H



#import "CPLResourceTransferTask.h"
#import "CPLProxyLibraryManager.h"

@interface CPLProxyResourceTransferTask : CPLResourceTransferTask

@property (retain, nonatomic) CPLProxyLibraryManager *proxyLibraryManager; // ivar: _proxyLibraryManager


-(void)cancelTask;


@end


#endif