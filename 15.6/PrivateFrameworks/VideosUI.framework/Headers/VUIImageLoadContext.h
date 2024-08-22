// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIIMAGELOADCONTEXT_H
#define VUIIMAGELOADCONTEXT_H

@class NSOperation<VUIImageLoadingOperation>;

#import <Foundation/Foundation.h>


@interface VUIImageLoadContext : NSObject

@property (retain, nonatomic) NSOperation<VUIImageLoadingOperation> *imageLoadOperation; // ivar: _imageLoadOperation
@property (nonatomic) NSUInteger requestCount; // ivar: _requestCount




@end


#endif