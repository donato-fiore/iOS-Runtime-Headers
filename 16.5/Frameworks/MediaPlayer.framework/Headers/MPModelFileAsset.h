// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMODELFILEASSET_H
#define MPMODELFILEASSET_H

@class NSString;


#import "MPModelObject.h"

@interface MPModelFileAsset : MPModelObject

@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) NSUInteger fileSize;
@property (copy, nonatomic, setter=setHLSKeyCertificateURL:) NSString *hlsKeyCertificateURL;
@property (copy, nonatomic, setter=setHLSKeyServerProtocol:) NSString *hlsKeyServerProtocol;
@property (copy, nonatomic, setter=setHLSKeyServerURL:) NSString *hlsKeyServerURL;
@property (nonatomic, getter=isNonPurgeable) BOOL nonPurgeable;
@property (nonatomic) NSInteger protectionType;
@property (copy, nonatomic) NSString *purchaseBundleFilePath;
@property (nonatomic) NSInteger qualityType;
@property (nonatomic) NSUInteger traits;


+(id)__nonPurgeable_KEY;
+(id)allSupportedProperties;


@end


#endif