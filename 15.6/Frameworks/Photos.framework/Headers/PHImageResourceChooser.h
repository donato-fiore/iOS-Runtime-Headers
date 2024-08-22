// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHIMAGERESOURCECHOOSER_H
#define PHIMAGERESOURCECHOOSER_H

@class NSString;
@protocol PHResourceChooserAsset;

#import <Foundation/Foundation.h>

#import "PHResourceChooserList.h"
#import "PHResourceChooserListResourceInfo.h"
#import "PHImageRequestBehaviorSpec.h"

@interface PHImageResourceChooser : NSObject {
    id<PHResourceChooserAsset> *_asset;
    PHResourceChooserList *_list;
    CGFloat _requiredScale;
    PHResourceChooserListResourceInfo *_fallbackInfo;
    BOOL _didCheckForLocalVideoKeyFrame;
    BOOL _hasLocalVideoKeyFrameInNonHintResources;
    BOOL _needsReset;
}


@property (nonatomic) BOOL allowHints; // ivar: _allowHints
@property (retain, nonatomic) PHImageRequestBehaviorSpec *behaviorSpec; // ivar: _behaviorSpec
@property (weak, nonatomic) id *context; // ivar: _context
@property (nonatomic) CGSize desiredSize; // ivar: _desiredSize
@property (nonatomic) CGFloat fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable; // ivar: _fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable
@property (nonatomic) BOOL isCloudSharedMode; // ivar: _isCloudSharedMode
@property (retain, nonatomic) NSString *loggingPrefix; // ivar: _loggingPrefix
@property (copy, nonatomic) id *resourceHandler; // ivar: _resourceHandler


+(NSUInteger)_chooserSourceOptionsFromBehaviorSpec:(id)arg0 allowHints:(BOOL)arg1 ;
+(id)_bagFromInfo:(id)arg0 asset:(id)arg1 behaviorSpec:(id)arg2 requiredScale:(CGFloat)arg3 bagVendor:(id)arg4 ;
+(id)_resourceVersionsFromImageRequestVersion:(NSInteger)arg0 assetHasAdjustments:(BOOL)arg1 ;
+(void)initialize;
-(BOOL)_resourceInfoPassesTestForImageDerivativeOfVideo:(id)arg0 ;
-(Class)_policyHandlerClassForCurrentPolicy;
-(id)_requestInfo;
-(id)initWithAsset:(id)arg0 resourceHandler:(id)arg1 ;
-(id)initWithChooserList:(id)arg0 asset:(id)arg1 resourceHandler:(id)arg2 ;
-(void)_reset;
-(void)_updateCachedGeometry;
-(void)moveFirst;
-(void)presentNextQualifyingResource;
-(void)reset;


@end


#endif