// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8NEWSFEED31ISSUECOVERIMAGEPROCESSORREQUEST_H
#define _TTC8NEWSFEED31ISSUECOVERIMAGEPROCESSORREQUEST_H

@class SwiftObject, NSDictionary, NSString;
@protocol TSProcessedImageRequestType;



@interface _TtC8NewsFeed31IssueCoverImageProcessorRequest : SwiftObject <TSProcessedImageRequestType>

 {
    ? assetHandles;
    ? size;
    ? scale;
    ? corners;
}


@property (nonatomic, copy) NSDictionary *assetHandles;
@property (nonatomic, readonly) NSString *cacheIdentifier;




@end


#endif