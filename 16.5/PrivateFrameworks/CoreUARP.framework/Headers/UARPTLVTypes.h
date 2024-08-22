// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UARPTLVTYPES_H
#define UARPTLVTYPES_H


#import <Foundation/Foundation.h>

#import "UARPAssetTag.h"

@interface UARPTLVTypes : NSObject

@property (readonly, copy) UARPAssetTag *hsModel4cc;
@property (readonly) NSUInteger hsModelDownloaded;
@property (readonly) NSUInteger hsModelEngineCompact;
@property (readonly) NSUInteger hsModelEngineNormal;
@property (readonly) NSUInteger hsModelFallback;
@property (readonly) NSUInteger hsModelPreInstalled;
@property (readonly) NSUInteger hsModelPrimary;
@property (readonly) NSUInteger hsModelTlvModelCertificate;
@property (readonly) NSUInteger hsModelTlvModelDigest;
@property (readonly) NSUInteger hsModelTlvModelEngineType;
@property (readonly) NSUInteger hsModelTlvModelEngineVersion;
@property (readonly) NSUInteger hsModelTlvModelHash;
@property (readonly) NSUInteger hsModelTlvModelLocale;
@property (readonly) NSUInteger hsModelTlvModelRole;
@property (readonly) NSUInteger hsModelTlvModelSignature;
@property (readonly) NSUInteger hsModelTlvModelType;


+(id)sharedInstance;


@end


#endif