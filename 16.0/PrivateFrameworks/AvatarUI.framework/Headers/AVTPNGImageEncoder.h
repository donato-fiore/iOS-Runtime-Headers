// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTPNGIMAGEENCODER_H
#define AVTPNGIMAGEENCODER_H

@class NSString;
@protocol AVTImageEncoder;

#import <Foundation/Foundation.h>


@interface AVTPNGImageEncoder : NSObject <AVTImageEncoder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)dataFromImage:(id)arg0 ;
-(id)fileExtension;
-(id)imageFromData:(id)arg0 error:(*id)arg1 ;
-(id)imageFromURL:(id)arg0 error:(*id)arg1 ;


@end


#endif