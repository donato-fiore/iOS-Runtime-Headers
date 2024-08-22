// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIBUNDLEIMAGEFETCHOPERATION_H
#define AMSUIBUNDLEIMAGEFETCHOPERATION_H

@class NSArray, NSString, UITraitCollection;


#import "AMSUIAssetFetchOperation.h"

@interface AMSUIBundleImageFetchOperation : AMSUIAssetFetchOperation

@property (retain, nonatomic) NSArray *bundlesToSearch; // ivar: _bundlesToSearch
@property (retain, nonatomic) NSString *imageName; // ivar: _imageName
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


-(BOOL)isLowLatency;
-(id)initWithImageName:(id)arg0 searchBundles:(id)arg1 compatibleWithTraitCollection:(id)arg2 ;
-(void)main;


@end


#endif