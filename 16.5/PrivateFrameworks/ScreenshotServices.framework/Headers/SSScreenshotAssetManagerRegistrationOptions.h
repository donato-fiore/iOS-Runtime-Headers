// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSSCREENSHOTASSETMANAGERREGISTRATIONOPTIONS_H
#define SSSCREENSHOTASSETMANAGERREGISTRATIONOPTIONS_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "SSUIServiceOptionsAssetMetadata.h"

@interface SSScreenshotAssetManagerRegistrationOptions : NSObject

@property (copy, nonatomic) NSString *applicationBundleID; // ivar: _applicationBundleID
@property (readonly, nonatomic) NSString *assetDescription;
@property (copy, nonatomic) SSUIServiceOptionsAssetMetadata *assetMetadata; // ivar: _assetMetadata
@property (copy, nonatomic) NSArray *harvestedMetadata; // ivar: _harvestedMetadata
@property (nonatomic) NSUInteger saveLocation; // ivar: _saveLocation




@end


#endif