// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTSTICKERIMAGEENCODER_H
#define AVTSTICKERIMAGEENCODER_H

@class NSString;
@protocol AVTClippableImageEncoder;

#import <Foundation/Foundation.h>


@interface AVTStickerImageEncoder : NSObject <AVTClippableImageEncoder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)dataFromImage:(id)arg0 ;
-(id)dataFromImage:(id)arg0 clippingRect:(struct CGRect )arg1 ;
-(id)fileExtension;
-(id)imageFromData:(id)arg0 error:(*id)arg1 ;
-(id)imageFromURL:(id)arg0 error:(*id)arg1 ;


@end


#endif