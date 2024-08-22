// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICONCLASSIFICATIONINPUT_H
#define ICONCLASSIFICATIONINPUT_H

@class NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface iconclassificationInput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (nonatomic) *__CVBuffer image_Placeholder; // ivar: _image_Placeholder


-(id)featureValueForName:(id)arg0 ;
-(id)initWithImage_Placeholder:(struct __CVBuffer *)arg0 ;
-(id)initWithImage_PlaceholderAtURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithImage_PlaceholderFromCGImage:(struct CGImage *)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif