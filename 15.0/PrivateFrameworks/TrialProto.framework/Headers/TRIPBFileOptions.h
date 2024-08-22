// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPBFILEOPTIONS_H
#define TRIPBFILEOPTIONS_H

@class NSString, NSMutableArray;


#import "TRIPBMessage.h"

@interface TRIPBFileOptions : TRIPBMessage

@property (nonatomic) BOOL ccEnableArenas;
@property (nonatomic) BOOL ccGenericServices;
@property (copy, nonatomic) NSString *csharpNamespace;
@property (nonatomic) BOOL deprecated;
@property (copy, nonatomic) NSString *goPackage;
@property (nonatomic) BOOL hasCcEnableArenas;
@property (nonatomic) BOOL hasCcGenericServices;
@property (nonatomic) BOOL hasCsharpNamespace;
@property (nonatomic) BOOL hasDeprecated;
@property (nonatomic) BOOL hasGoPackage;
@property (nonatomic) BOOL hasJavaGenerateEqualsAndHash;
@property (nonatomic) BOOL hasJavaGenericServices;
@property (nonatomic) BOOL hasJavaMultipleFiles;
@property (nonatomic) BOOL hasJavaOuterClassname;
@property (nonatomic) BOOL hasJavaPackage;
@property (nonatomic) BOOL hasJavaStringCheckUtf8;
@property (nonatomic) BOOL hasObjcClassPrefix;
@property (nonatomic) BOOL hasOptimizeFor;
@property (nonatomic) BOOL hasPhpClassPrefix;
@property (nonatomic) BOOL hasPhpGenericServices;
@property (nonatomic) BOOL hasPhpMetadataNamespace;
@property (nonatomic) BOOL hasPhpNamespace;
@property (nonatomic) BOOL hasPyGenericServices;
@property (nonatomic) BOOL hasRubyPackage;
@property (nonatomic) BOOL hasSwiftPrefix;
@property (nonatomic) BOOL javaGenerateEqualsAndHash;
@property (nonatomic) BOOL javaGenericServices;
@property (nonatomic) BOOL javaMultipleFiles;
@property (copy, nonatomic) NSString *javaOuterClassname;
@property (copy, nonatomic) NSString *javaPackage;
@property (nonatomic) BOOL javaStringCheckUtf8;
@property (copy, nonatomic) NSString *objcClassPrefix;
@property (nonatomic) int optimizeFor;
@property (copy, nonatomic) NSString *phpClassPrefix;
@property (nonatomic) BOOL phpGenericServices;
@property (copy, nonatomic) NSString *phpMetadataNamespace;
@property (copy, nonatomic) NSString *phpNamespace;
@property (nonatomic) BOOL pyGenericServices;
@property (copy, nonatomic) NSString *rubyPackage;
@property (copy, nonatomic) NSString *swiftPrefix;
@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (readonly, nonatomic) NSUInteger uninterpretedOptionArray_Count;


+(id)descriptor;


@end


#endif