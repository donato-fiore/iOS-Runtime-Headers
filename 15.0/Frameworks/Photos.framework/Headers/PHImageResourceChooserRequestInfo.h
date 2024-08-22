// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHIMAGERESOURCECHOOSERREQUESTINFO_H
#define PHIMAGERESOURCECHOOSERREQUESTINFO_H

@class NSArray, NSString;
@protocol PHResourceChooserAsset;

#import <Foundation/Foundation.h>

#import "PHImageRequestBehaviorSpec.h"

@interface PHImageResourceChooserRequestInfo : NSObject

@property (readonly, nonatomic) NSArray *allowedResourceVersions; // ivar: _allowedResourceVersions
@property (readonly, nonatomic) NSObject<PHResourceChooserAsset> *asset; // ivar: _asset
@property (readonly, nonatomic) PHImageRequestBehaviorSpec *behaviorSpec; // ivar: _behaviorSpec
@property (readonly, nonatomic) CGSize desiredSize; // ivar: _desiredSize
@property (readonly, nonatomic) CGFloat fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable; // ivar: _fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable
@property (readonly, nonatomic) BOOL isCloudShared; // ivar: _isCloudShared
@property (copy, nonatomic) NSString *loggingPrefix; // ivar: _loggingPrefix
@property (readonly, nonatomic) float requestedScale; // ivar: _requestedScale


-(id)initWithAsset:(id)arg0 desiredSize:(struct CGSize )arg1 requestedScale:(float)arg2 allowedResourceVersions:(id)arg3 behaviorSpec:(id)arg4 cloudSharedMode:(BOOL)arg5 fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable:(CGFloat)arg6 loggingPrefix:(id)arg7 ;


@end


#endif