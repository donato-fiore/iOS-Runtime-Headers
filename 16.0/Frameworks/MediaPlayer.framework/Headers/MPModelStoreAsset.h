// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELSTOREASSET_H
#define MPMODELSTOREASSET_H

@class NSString;


#import "MPModelObject.h"

@interface MPModelStoreAsset : MPModelObject

@property (nonatomic) NSUInteger accountIdentifier;
@property (nonatomic) NSInteger endpointType;
@property (readonly, nonatomic) BOOL needsUserUpload;
@property (copy, nonatomic) NSString *redownloadParameters;
@property (nonatomic, getter=isRedownloadable) BOOL redownloadable;
@property (nonatomic) BOOL shouldReportPlayEvents;
@property (nonatomic, getter=isSubscriptionRequired) BOOL subscriptionRequired;


+(id)__redownloadable_KEY;
+(id)__subscriptionRequired_KEY;
+(id)allSupportedProperties;


@end


#endif