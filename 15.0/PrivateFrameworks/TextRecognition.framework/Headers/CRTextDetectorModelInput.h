// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRTEXTDETECTORMODELINPUT_H
#define CRTEXTDETECTORMODELINPUT_H

@class NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface CRTextDetectorModelInput : NSObject <MLFeatureProvider>



@property (nonatomic) *__CVBuffer data; // ivar: _data
@property (readonly, nonatomic) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;
-(id)initWithData:(struct __CVBuffer *)arg0 ;


@end


#endif