// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSETRESOURCELOADINGCONTENTINFORMATIONREQUEST_H
#define AVASSETRESOURCELOADINGCONTENTINFORMATIONREQUEST_H

@class NSArray, NSString, NSDate;

#import <Foundation/Foundation.h>

#import "AVAssetResourceLoadingContentInformationRequestInternal.h"

@interface AVAssetResourceLoadingContentInformationRequest : NSObject {
    AVAssetResourceLoadingContentInformationRequestInternal *_contentInformationRequest;
}


@property (readonly, nonatomic) NSArray *allowedContentTypes;
@property (nonatomic, getter=isByteRangeAccessSupported) BOOL byteRangeAccessSupported;
@property (nonatomic) NSInteger contentLength;
@property (copy, nonatomic) NSString *contentType;
@property (nonatomic, getter=isEntireLengthAvailableOnDemand) BOOL entireLengthAvailableOnDemand;
@property (copy, nonatomic) NSDate *renewalDate;


-(BOOL)isDiskCachingPermitted;
-(id)description;
-(id)init;
-(id)initWithLoadingRequest:(id)arg0 allowedContentTypes:(id)arg1 ;
-(id)propertyList;
-(void)dealloc;
-(void)setDiskCachingPermitted:(BOOL)arg0 ;


@end


#endif