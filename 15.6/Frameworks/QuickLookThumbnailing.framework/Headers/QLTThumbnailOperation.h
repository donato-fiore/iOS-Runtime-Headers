// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLTTHUMBNAILOPERATION_H
#define QLTTHUMBNAILOPERATION_H

@class NSError, UIImage;


#import "QLThumbnailRequestOperation.h"

@interface QLTThumbnailOperation : QLThumbnailRequestOperation

@property (readonly) NSError *error; // ivar: _error
@property (readonly) UIImage *image; // ivar: _image
@property (copy) id *needsAdditionalTime; // ivar: _needsAdditionalTime




@end


#endif