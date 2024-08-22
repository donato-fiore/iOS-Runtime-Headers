// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEPUBLISHERLOGOPROCESSORREQUEST_H
#define NEPUBLISHERLOGOPROCESSORREQUEST_H

@class NSDictionary, NSString;
@protocol TSProcessedImageRequestType;

#import <Foundation/Foundation.h>


@interface NEPublisherLogoProcessorRequest : NSObject <TSProcessedImageRequestType>

 {
    ? assetHandles;
    ? publisherLogoImageSize;
    ? scale;
    ? theme;
    ? options;
}


@property (nonatomic, copy) NSDictionary *assetHandles;
@property (nonatomic, readonly) NSString *cacheIdentifier;


-(id)init;
-(id)initWithPublisherLogoAssetHandle:(id)arg0 publisherLogoImageSize:(struct CGSize )arg1 scale:(CGFloat)arg2 theme:(NSInteger)arg3 ;


@end


#endif