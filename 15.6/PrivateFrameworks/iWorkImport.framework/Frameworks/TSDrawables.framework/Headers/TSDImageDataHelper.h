// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDIMAGEDATAHELPER_H
#define TSDIMAGEDATAHELPER_H

@class TSPData;

#import <Foundation/Foundation.h>


@interface TSDImageDataHelper : NSObject

@property (readonly, nonatomic) TSPData *imageData; // ivar: _imageData
@property (readonly, nonatomic) CGSize naturalSize;


+(id)thumbnailImageDataForImageData:(id)arg0 ;
-(id)initWithImageData:(id)arg0 ;
-(void)generateThumbnailImageDataWithCompletionHandler:(id)arg0 ;


@end


#endif