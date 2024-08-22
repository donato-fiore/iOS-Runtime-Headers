// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARCOACHINGINSTANCETRANSFORM_H
#define ARCOACHINGINSTANCETRANSFORM_H


#import <Foundation/Foundation.h>


@interface ARCoachingInstanceTransform : NSObject {
    ? _baseTransform;
    ? _transform;
    ? _localScale;
    ? _localTranslation;
    ? _recordedScale;
    ? _recordedTranslation;
}


@property ? localScale;
@property ? localTranslation;
@property ? recordedScale;
@property ? recordedTranslation;
@property (readonly, nonatomic) ? transform;


-(id)init:(struct ? )arg0 ;


@end


#endif