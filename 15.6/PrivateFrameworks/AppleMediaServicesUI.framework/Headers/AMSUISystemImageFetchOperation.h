// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUISYSTEMIMAGEFETCHOPERATION_H
#define AMSUISYSTEMIMAGEFETCHOPERATION_H

@class NSString, UITraitCollection;


#import "AMSUIAssetFetchOperation.h"

@interface AMSUISystemImageFetchOperation : AMSUIAssetFetchOperation

@property (retain, nonatomic) NSString *imageName; // ivar: _imageName
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


-(BOOL)isLowLatency;
-(id)initWithSystemImageName:(id)arg0 compatibleWithTraitCollection:(id)arg1 ;
-(void)main;


@end


#endif