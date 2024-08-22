// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLASSETSDRESOURCEWRITEONLYCLIENT_H
#define PLASSETSDRESOURCEWRITEONLYCLIENT_H



#import "PLAssetsdBaseClient.h"

@interface PLAssetsdResourceWriteOnlyClient : PLAssetsdBaseClient



-(void)saveAssetWithJobDictionary:(id)arg0 imageSurface:(struct __IOSurface *)arg1 previewImageSurface:(struct __IOSurface *)arg2 completionHandler:(id)arg3 ;


@end


#endif