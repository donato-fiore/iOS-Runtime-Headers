// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7NEWSUI228FEEDNAVIMAGEPROCESSORREQUEST_H
#define _TTC7NEWSUI228FEEDNAVIMAGEPROCESSORREQUEST_H

@class NSDictionary, NSString;
@protocol TSProcessedImageRequestType;

#import <Foundation/Foundation.h>


@interface _TtC7NewsUI228FeedNavImageProcessorRequest : NSObject <TSProcessedImageRequestType>

 {
    ? assetHandles;
    ? feedNavImageSize;
    ? scale;
    ? cornerRadius;
    ? userInterfaceStyle;
}


@property (nonatomic, copy) NSDictionary *assetHandles;
@property (nonatomic, readonly) NSString *cacheIdentifier;


-(id)init;


@end


#endif