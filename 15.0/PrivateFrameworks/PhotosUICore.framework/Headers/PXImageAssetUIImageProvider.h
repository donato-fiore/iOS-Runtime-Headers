// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXIMAGEASSETUIIMAGEPROVIDER_H
#define PXIMAGEASSETUIIMAGEPROVIDER_H

@class NSString;
@protocol PXUIImageProvider;

#import <Foundation/Foundation.h>


@interface PXImageAssetUIImageProvider : NSObject <PXUIImageProvider>

 {
    uint8_t _mediaRequestID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)requestImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(void)cancelImageRequest:(NSInteger)arg0 ;


@end


#endif