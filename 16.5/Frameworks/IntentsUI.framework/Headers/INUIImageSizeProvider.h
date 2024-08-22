// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INUIIMAGESIZEPROVIDER_H
#define INUIIMAGESIZEPROVIDER_H

@class NSString;
@protocol INImageSizeProvider;

#import <Foundation/Foundation.h>


@interface INUIImageSizeProvider : NSObject <INImageSizeProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)downscaledPNGImageForImage:(id)arg0 size:(struct ? )arg1 error:(*id)arg2 ;
+(struct ? )imageSizeForImage:(id)arg0 ;


@end


#endif