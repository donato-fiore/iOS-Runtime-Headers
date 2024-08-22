// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SELECTEDCHECKBOXFROMICON__GENERATED__INPUT_H
#define SELECTEDCHECKBOXFROMICON__GENERATED__INPUT_H

@class NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface SelectedCheckboxFromIcon__generated__Input : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (nonatomic) *__CVBuffer image; // ivar: _image


-(id)featureValueForName:(id)arg0 ;
-(id)initWithImage:(struct __CVBuffer *)arg0 ;


@end


#endif