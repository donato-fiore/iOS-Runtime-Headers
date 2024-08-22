// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMFILEBACKEDCONTEXT_H
#define PXCMMFILEBACKEDCONTEXT_H



#import "PXCMMContext.h"
#import "PXCMMFileBackedActionManager.h"

@interface PXCMMFileBackedContext : PXCMMContext {
    PXCMMFileBackedActionManager *_fileBackedActionManager;
}




+(id)fileBackedContextWithDirectoryURL:(id)arg0 activityType:(NSUInteger)arg1 title:(id)arg2 ;
-(id)actionManager;
-(id)initWithAssetsDataSourceManager:(id)arg0 mediaProvider:(id)arg1 activityType:(NSUInteger)arg2 ;


@end


#endif