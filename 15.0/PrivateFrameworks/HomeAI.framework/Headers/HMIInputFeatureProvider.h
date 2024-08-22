// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIINPUTFEATUREPROVIDER_H
#define HMIINPUTFEATUREPROVIDER_H

@class NSSet, NSString;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface HMIInputFeatureProvider : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (readonly) NSString *inputName; // ivar: _inputName
@property (readonly) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer


-(id)featureValueForName:(id)arg0 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 inputName:(id)arg1 ;
-(void)dealloc;


@end


#endif