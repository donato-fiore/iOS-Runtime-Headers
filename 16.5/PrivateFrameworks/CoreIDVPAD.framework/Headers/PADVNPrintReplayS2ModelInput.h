// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PADVNPRINTREPLAYS2MODELINPUT_H
#define PADVNPRINTREPLAYS2MODELINPUT_H

@class NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface PADVNPrintReplayS2ModelInput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (nonatomic) *__CVBuffer image; // ivar: _image


-(id)featureValueForName:(id)arg0 ;
-(id)initWithImage:(struct __CVBuffer *)arg0 ;
-(id)initWithImageAtURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithImageFromCGImage:(struct CGImage *)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif