// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMPONBOARDINGFEATURE_H
#define AMPONBOARDINGFEATURE_H

@class NSString, UIImage;

#import <Foundation/Foundation.h>


@interface AMPOnboardingFeature : NSObject

@property (readonly, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) NSString *titleText; // ivar: _titleText


-(id)initWithImage:(id)arg0 titleText:(id)arg1 descriptionText:(id)arg2 ;


@end


#endif