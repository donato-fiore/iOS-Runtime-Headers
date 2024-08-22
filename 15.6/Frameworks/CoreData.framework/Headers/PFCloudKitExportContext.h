// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFCLOUDKITEXPORTCONTEXT_H
#define PFCLOUDKITEXPORTCONTEXT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "PFCloudKitExporterOptions.h"

@interface PFCloudKitExportContext : NSObject {
    PFCloudKitExporterOptions *_options;
    NSUInteger _totalBytes;
    NSUInteger _totalRecords;
    NSUInteger _totalRecordIDs;
    NSMutableArray *_writtenAssetURLs;
}




-(BOOL)checkForObjectsNeedingExportInStore:(id)arg0 andReturnCount:(*NSUInteger)arg1 withManagedObjectContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)processAnalyzedHistoryInStore:(id)arg0 inManagedObjectContext:(id)arg1 error:(*id)arg2 ;
-(id)initWithOptions:(id)arg0 ;
-(void)dealloc;


@end


#endif