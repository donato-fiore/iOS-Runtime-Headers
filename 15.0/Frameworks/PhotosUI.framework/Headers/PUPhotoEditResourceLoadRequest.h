// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOEDITRESOURCELOADREQUEST_H
#define PUPHOTOEDITRESOURCELOADREQUEST_H

@protocol NSCopying, PUPhotoEditResourceLoaderDelegate;

#import <Foundation/Foundation.h>


@interface PUPhotoEditResourceLoadRequest : NSObject <NSCopying>



@property (nonatomic, setter=_setResolvedVersion:) NSInteger _resolvedVersion; // ivar: __resolvedVersion
@property (nonatomic) BOOL assetLoadingAsRaw; // ivar: _assetLoadingAsRaw
@property (weak, nonatomic) NSObject<PUPhotoEditResourceLoaderDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL requireAdjustments; // ivar: _requireAdjustments
@property (nonatomic) BOOL requireLocalResources; // ivar: _requireLocalResources
@property (nonatomic) CGSize targetSize; // ivar: _targetSize
@property (nonatomic) NSInteger version; // ivar: _version


-(BOOL)_isWorkVersionResolved;
-(BOOL)_needsLoadAdjustments;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_assertWorkVersionResolved;
-(void)_resolveVersionIfNeededWithWorkVersion:(NSInteger)arg0 ;


@end


#endif