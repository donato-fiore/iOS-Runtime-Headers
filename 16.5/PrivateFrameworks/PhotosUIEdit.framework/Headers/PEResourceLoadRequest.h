// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PERESOURCELOADREQUEST_H
#define PERESOURCELOADREQUEST_H

@protocol NSCopying, PEResourceLoaderDelegate;

#import <Foundation/Foundation.h>


@interface PEResourceLoadRequest : NSObject <NSCopying>



@property (nonatomic, setter=_setResolvedVersion:) NSInteger _resolvedVersion; // ivar: __resolvedVersion
@property (nonatomic) BOOL assetLoadingAsRaw; // ivar: _assetLoadingAsRaw
@property (weak, nonatomic) NSObject<PEResourceLoaderDelegate> *delegate; // ivar: _delegate
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