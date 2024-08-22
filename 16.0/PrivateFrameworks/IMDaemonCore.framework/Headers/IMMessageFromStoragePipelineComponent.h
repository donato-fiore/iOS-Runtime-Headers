// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMMESSAGEFROMSTORAGEPIPELINECOMPONENT_H
#define IMMESSAGEFROMSTORAGEPIPELINECOMPONENT_H

@class IMPipelineComponent, NSString;


#import "IMDMessageFromStorageController.h"

@interface IMMessageFromStoragePipelineComponent : IMPipelineComponent {
    NSUInteger _processingType;
    id *_broadcaster;
    IMDMessageFromStorageController *_storageController;
    NSString *_service;
}




-(id)initWithStorageProcessingType:(NSUInteger)arg0 storageController:(id)arg1 broadcaster:(id)arg2 account:(id)arg3 ;
-(id)runIndividuallyWithInput:(id)arg0 ;


@end


#endif