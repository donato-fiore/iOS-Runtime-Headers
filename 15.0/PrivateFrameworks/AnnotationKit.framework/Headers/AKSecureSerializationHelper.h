// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKSECURESERIALIZATIONHELPER_H
#define AKSECURESERIALIZATIONHELPER_H


#import <Foundation/Foundation.h>


@interface AKSecureSerializationHelper : NSObject



+(id)_callXPCServiceProxyWithInputData:(id)arg0 andSelector:(SEL)arg1 ;
+(id)_decodeAttributedStringFromRTFData:(id)arg0 ;
+(id)_decodeTextAttributesFromRTFData:(id)arg0 ;
+(id)_encodeAttributedStringAsRTFData:(id)arg0 ;
+(id)_encodeTextAttributesAsRTFData:(id)arg0 ;
+(id)_securelyConvertLegacyAnnotationArchiveToRTFArchive:(id)arg0 ;
+(id)_securelyConvertLegacyTextAttributeDataToRTFData:(id)arg0 ;
+(id)_unsafeLegacyDecodeTextAttributesFromData:(id)arg0 ;
+(id)convertLegacyModelControllerArchive:(id)arg0 ;
+(id)dataForSecureCodingCompliantObject:(id)arg0 withOptionalKey:(id)arg1 ;
+(id)decodeColor:(id)arg0 ;
+(id)decodeFont:(id)arg0 ;
+(id)decodeTextAttributes:(id)arg0 ;
+(id)encodeColor:(id)arg0 ;
+(id)encodeFont:(id)arg0 ;
+(id)encodeTextAttributes:(id)arg0 ;
+(id)secureCodingCompliantObjectForData:(id)arg0 ofClasses:(id)arg1 withOptionalKey:(id)arg2 ;
+(void)_decodeLegacyTextPropertiesWithSecureCoder:(id)arg0 annotationTextRTF:(*id)arg1 typingAttributesRTF:(*id)arg2 ;
+(void)_decodeRTFTextPropertiesWithSecureCoder:(id)arg0 annotationTextRTF:(*id)arg1 typingAttributesRTF:(*id)arg2 ;
+(void)_decodeTextPropertiesForAnnotation:(id)arg0 withSecureCoder:(id)arg1 ;
+(void)_unsafeLegacyDecodeTextPropertiesForAnnotation:(id)arg0 withNonSecureCoder:(id)arg1 ;
+(void)decodeTextPropertiesOfAnnotation:(id)arg0 withSecureCoder:(id)arg1 ;
+(void)encodeTextPropertiesOfAnnotation:(id)arg0 withCoder:(id)arg1 ;


@end


#endif