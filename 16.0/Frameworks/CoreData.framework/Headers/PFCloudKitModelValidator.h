// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFCLOUDKITMODELVALIDATOR_H
#define PFCLOUDKITMODELVALIDATOR_H

@class NSString;

#import <Foundation/Foundation.h>

#import "NSManagedObjectModel.h"
#import "NSCloudKitMirroringDelegateOptions.h"

@interface PFCloudKitModelValidator : NSObject {
    NSManagedObjectModel *_model;
    NSString *_configurationName;
    BOOL _skipValueTransformerValidation;
    BOOL _validateLegacyMetadataAttributes;
    NSCloudKitMirroringDelegateOptions *_options;
}




-(id)initWithManagedObjectModel:(id)arg0 configuration:(id)arg1 mirroringDelegateOptions:(id)arg2 ;
-(void)dealloc;


@end


#endif