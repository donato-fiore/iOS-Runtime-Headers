// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSTATICSYNCIMPORTTASK_H
#define HDSTATICSYNCIMPORTTASK_H

@class NSURL;


#import "HDStaticSyncTask.h"

@interface HDStaticSyncImportTask : HDStaticSyncTask {
    NSURL *_importDirectoryURL;
}




-(id)initWithProfile:(id)arg0 options:(NSUInteger)arg1 storeIdentifier:(id)arg2 URL:(id)arg3 ;
-(id)runWithCompletion:(id)arg0 ;


@end


#endif