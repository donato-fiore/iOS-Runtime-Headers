// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUISYSTEMIMAGEFETCHOPERATION_H
#define AMSUISYSTEMIMAGEFETCHOPERATION_H

@class NSString, UITraitCollection, NSNumber;


#import "AMSUIAssetFetchOperation.h"

@interface AMSUISystemImageFetchOperation : AMSUIAssetFetchOperation

@property (retain, nonatomic) NSString *imageName; // ivar: _imageName
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (retain, nonatomic) NSNumber *variableValue; // ivar: _variableValue


-(BOOL)isLowLatency;
-(id)initWithSystemImageName:(id)arg0 variableValue:(id)arg1 compatibleWithTraitCollection:(id)arg2 ;
-(void)main;


@end


#endif