// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SECXPCHELPER_H
#define SECXPCHELPER_H


#import <Foundation/Foundation.h>


@interface SecXPCHelper : NSObject



+(id)cleanDictionaryForXPC:(id)arg0 ;
+(id)cleanObjectForXPC:(id)arg0 ;
+(id)cleanseErrorForXPC:(id)arg0 ;
+(id)encodedDataFromError:(id)arg0 ;
+(id)errorFromEncodedData:(id)arg0 ;
+(id)safeCKErrorPrimitiveClasses;
+(id)safeErrorClasses;
+(id)safeErrorCollectionClasses;
+(id)safeErrorPrimitiveClasses;


@end


#endif