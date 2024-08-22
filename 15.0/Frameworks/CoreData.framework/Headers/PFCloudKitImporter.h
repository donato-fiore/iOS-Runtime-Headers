// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFCLOUDKITIMPORTER_H
#define PFCLOUDKITIMPORTER_H

@class NSArray, NSMutableArray, CKServerChangeToken;

#import <Foundation/Foundation.h>

#import "PFCloudKitImporterOptions.h"
#import "NSCloudKitMirroringImportRequest.h"

@interface PFCloudKitImporter : NSObject {
    PFCloudKitImporterOptions *_options;
    NSCloudKitMirroringImportRequest *_request;
    NSArray *_workItems;
    NSMutableArray *_workItemResults;
    CKServerChangeToken *_updatedDatabaseChangeToken;
    NSUInteger _totalImportedBytes;
}




-(id)initWithOptions:(id)arg0 request:(id)arg1 ;
-(void)dealloc;


@end


#endif