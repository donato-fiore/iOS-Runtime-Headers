// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPMIMETYPEREGISTRY_H
#define LPMIMETYPEREGISTRY_H


#import <Foundation/Foundation.h>


@interface LPMIMETypeRegistry : NSObject



+(BOOL)isARAssetType:(id)arg0 ;
+(BOOL)isAudioType:(id)arg0 ;
+(BOOL)isHLSType:(id)arg0 ;
+(BOOL)isImageType:(id)arg0 ;
+(BOOL)isJSONType:(id)arg0 ;
+(BOOL)isMediaType:(id)arg0 ;
+(BOOL)isNonAnimatedMultiframeImageType:(id)arg0 ;
+(BOOL)isVideoType:(id)arg0 ;
+(BOOL)isWebPageType:(id)arg0 ;
+(id)MIMETypeForUTI:(id)arg0 ;
+(id)UTIForFileExtension:(id)arg0 ;
+(id)UTIForMIMEType:(id)arg0 ;
+(id)fileExtensionForMIMEType:(id)arg0 ;
+(id)fileExtensionForUTI:(id)arg0 ;


@end


#endif