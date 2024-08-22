// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NETHUMBNAILPROCESSORREQUEST_H
#define NETHUMBNAILPROCESSORREQUEST_H

@class NSDictionary, NSString;
@protocol TSProcessedImageRequestType;

#import <Foundation/Foundation.h>


@interface NEThumbnailProcessorRequest : NSObject <TSProcessedImageRequestType>

 {
    ? assetHandles;
    ? thumbnailFrame;
    ? focalFrame;
    ? scale;
    ? roundedCorners;
    ? cornerRadius;
    ? border;
}


@property (nonatomic, readonly) NSDictionary *assetHandles;
@property (nonatomic, readonly) NSString *cacheIdentifier;


-(id)init;
-(id)initWithThumbnailAssetHandle:(id)arg0 thumbnailFrame:(struct CGRect )arg1 focalFrame:(struct CGRect )arg2 scale:(CGFloat)arg3 byRoundingCorners:(NSUInteger)arg4 cornerRadius:(CGFloat)arg5 ;


@end


#endif