// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBMIMETYPEREGISTRY_H
#define WEBMIMETYPEREGISTRY_H


#import <Foundation/Foundation.h>


@interface WebMIMETypeRegistry : NSObject



+(BOOL)isSupportedImageMIMEType:(id)arg0 ;
+(BOOL)isSupportedMediaMIMEType:(id)arg0 ;
+(id)mimeTypeForExtension:(id)arg0 ;
+(id)preferredExtensionForMIMEType:(id)arg0 ;


@end


#endif