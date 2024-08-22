// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVASSETRESOURCELOADINGCONTENTINFORMATIONREQUESTINTERNAL_H
#define AVASSETRESOURCELOADINGCONTENTINFORMATIONREQUESTINTERNAL_H

@class NSString, NSArray, NSDate;

#import <Foundation/Foundation.h>


@interface AVAssetResourceLoadingContentInformationRequestInternal : NSObject {
    NSString *contentType;
    NSArray *allowedContentTypes;
    NSInteger contentLength;
    BOOL entireLengthAvailableOnDemand;
    BOOL byteRangeAccessSupported;
    NSDate *renewalDate;
    BOOL diskCachingPermitted;
}






@end


#endif