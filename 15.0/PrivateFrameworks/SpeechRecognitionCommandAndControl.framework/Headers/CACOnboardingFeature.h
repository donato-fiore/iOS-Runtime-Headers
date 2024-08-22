// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CACONBOARDINGFEATURE_H
#define CACONBOARDINGFEATURE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CACOnboardingFeature : NSObject

@property (retain, nonatomic) NSString *helperText; // ivar: _helperText
@property (retain, nonatomic) NSString *imageBundleName; // ivar: _imageBundleName
@property (retain, nonatomic) NSString *titleText; // ivar: _titleText


+(id)featureWithTitleText:(id)arg0 helperText:(id)arg1 ;
+(id)featureWithTitleText:(id)arg0 helperText:(id)arg1 imageBundleName:(id)arg2 ;
-(id)initWithTitleText:(id)arg0 helperText:(id)arg1 imageBundleName:(id)arg2 ;


@end


#endif