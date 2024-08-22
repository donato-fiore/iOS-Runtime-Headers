// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSAMPLEINBOXMEDIAPROVIDER_H
#define PXSAMPLEINBOXMEDIAPROVIDER_H

@class NSString;
@protocol PXInboxModelMediaProvider;

#import <Foundation/Foundation.h>


@interface PXSampleInboxMediaProvider : NSObject <PXInboxModelMediaProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_mockImage;
-(int)requestImageForPreviewItem:(id)arg0 targetSize:(struct CGSize )arg1 resultHandler:(id)arg2 ;
-(void)cancelImageRequest:(int)arg0 ;


@end


#endif