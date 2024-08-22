// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPTPCONVERSIONHELPER_H
#define PLPTPCONVERSIONHELPER_H


#import <Foundation/Foundation.h>


@interface PLPTPConversionHelper : NSObject



+(id)conversionRequestForAsset:(id)arg0 isVideo:(BOOL)arg1 isRender:(BOOL)arg2 withPeerCapabilites:(id)arg3 ;
+(id)conversionResultForAsset:(id)arg0 isVideo:(BOOL)arg1 isRender:(BOOL)arg2 withConversionManager:(id)arg3 peerCapabilities:(id)arg4 ;


@end


#endif