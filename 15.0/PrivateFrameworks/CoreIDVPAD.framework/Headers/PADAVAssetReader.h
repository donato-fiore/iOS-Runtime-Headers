// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PADAVASSETREADER_H
#define PADAVASSETREADER_H


#import <Foundation/Foundation.h>


@interface PADAVAssetReader : NSObject



-(id)_imageDataFromVideo:(id)arg0 timestamp:(struct ? )arg1 size:(struct CGSize )arg2 ;
-(id)imagesFromVideoURL:(id)arg0 timestamps:(id)arg1 ;
-(id)imagesFromVideoURL:(id)arg0 timestamps:(id)arg1 size:(struct CGSize )arg2 ;
-(void)readVideoAtURL:(id)arg0 size:(struct CGSize )arg1 withFrameHandler:(id)arg2 ;


@end


#endif