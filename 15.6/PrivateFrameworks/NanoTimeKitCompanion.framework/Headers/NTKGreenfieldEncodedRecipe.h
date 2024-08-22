// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKGREENFIELDENCODEDRECIPE_H
#define NTKGREENFIELDENCODEDRECIPE_H

@class NSURL, UIImage, NSString;

#import <Foundation/Foundation.h>


@interface NTKGreenfieldEncodedRecipe : NSObject

@property (retain, nonatomic) NSURL *watchFaceDataUrl; // ivar: _watchFaceDataUrl
@property (retain, nonatomic) UIImage *watchFaceImage; // ivar: _watchFaceImage
@property (retain, nonatomic) NSString *watchFaceName; // ivar: _watchFaceName


-(id)initWithWatchFaceDataUrl:(id)arg0 watchFaceImage:(id)arg1 watchFaceName:(id)arg2 ;


@end


#endif