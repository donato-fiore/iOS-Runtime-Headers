// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRTEXTDETECTORMODELV3INPUT_H
#define CRTEXTDETECTORMODELV3INPUT_H

@class NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface CRTextDetectorModelV3Input : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (nonatomic) *__CVBuffer img_input; // ivar: _img_input


-(id)featureValueForName:(id)arg0 ;
-(id)initWithImg_input:(struct __CVBuffer *)arg0 ;


@end


#endif