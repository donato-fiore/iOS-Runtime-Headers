// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTJPEGIMAGEENCODER_H
#define AVTJPEGIMAGEENCODER_H

@class NSString;
@protocol AVTImageEncoder;

#import <Foundation/Foundation.h>


@interface AVTJPEGImageEncoder : NSObject <AVTImageEncoder>



@property (readonly, nonatomic) CGFloat compressionQuality; // ivar: _compressionQuality
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)dataFromImage:(id)arg0 ;
-(id)fileExtension;
-(id)imageFromData:(id)arg0 error:(*id)arg1 ;
-(id)imageFromURL:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithCompressionQuality:(CGFloat)arg0 ;


@end


#endif