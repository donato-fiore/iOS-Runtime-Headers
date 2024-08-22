// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8NEWSFEED18FORMATIMAGEREQUEST_H
#define _TTC8NEWSFEED18FORMATIMAGEREQUEST_H

@class NSDictionary, NSString;
@protocol TSProcessedImageRequestType;

#import <Foundation/Foundation.h>


@interface _TtC8NewsFeed18FormatImageRequest : NSObject <TSProcessedImageRequestType>

 {
    ? size;
    ? scale;
    ? style;
    ? inventory;
    ? focalFrame;
    ? renderingMode;
    ? traitCollection;
    ? assetHandles;
    ? assetHandle;
    ? cacheIdentifier;
}


@property (nonatomic, readonly) NSDictionary *assetHandles;
@property (nonatomic, readonly) NSString *cacheIdentifier;


-(id)init;


@end


#endif