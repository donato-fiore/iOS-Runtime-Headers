// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC5TEAUI28COMPLEXIMAGEPROCESSORREQUEST_H
#define _TTC5TEAUI28COMPLEXIMAGEPROCESSORREQUEST_H

@class SwiftObject, NSDictionary, NSString;
@protocol TSProcessedImageRequestType;



@interface _TtC5TeaUI28ComplexImageProcessorRequest : SwiftObject <TSProcessedImageRequestType>

 {
    ? assetHandles;
    ? cacheIdentifier;
    ? assetHandle;
    ? instructions;
    ? size;
    ? imageRenderingMode;
}


@property (nonatomic, readonly) NSDictionary *assetHandles;
@property (nonatomic, readonly) NSString *cacheIdentifier;




@end


#endif