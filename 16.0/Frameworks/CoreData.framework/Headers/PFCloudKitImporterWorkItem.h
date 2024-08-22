// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFCLOUDKITIMPORTERWORKITEM_H
#define PFCLOUDKITIMPORTERWORKITEM_H


#import <Foundation/Foundation.h>

#import "PFCloudKitImporterOptions.h"
#import "NSCloudKitMirroringImportRequest.h"

@interface PFCloudKitImporterWorkItem : NSObject {
    PFCloudKitImporterOptions *_options;
    NSCloudKitMirroringImportRequest *_request;
}




-(id)initWithOptions:(id)arg0 request:(id)arg1 ;
-(void)dealloc;
-(void)doWorkForStore:(id)arg0 inMonitor:(id)arg1 completion:(id)arg2 ;


@end


#endif