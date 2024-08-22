// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC5TEAUI21PROCESSEDIMAGEREQUEST_H
#define _TTC5TEAUI21PROCESSEDIMAGEREQUEST_H

@class SwiftObject, NSDictionary, NSString;
@protocol TSProcessedImageRequestType;



@interface _TtC5TeaUI21ProcessedImageRequest : SwiftObject <TSProcessedImageRequestType>

 {
    ? assetHandles;
    ? cacheIdentifier;
    ? size;
    ? imageRenderingMode;
}


@property (nonatomic, readonly) NSDictionary *assetHandles;
@property (nonatomic, readonly) NSString *cacheIdentifier;




@end


#endif