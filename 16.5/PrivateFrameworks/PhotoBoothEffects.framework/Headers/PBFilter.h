// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFILTER_H
#define PBFILTER_H

@class CIFilter;

#import <Foundation/Foundation.h>


@interface PBFilter : NSObject {
    CIFilter *_ciFilter;
    CIFilter *_wrapMirrorFilter;
}




+(BOOL)needsDisplayForKey:(id)arg0 ;
+(id)defaultValueForKey:(id)arg0 ;
+(id)filterWithName:(id)arg0 ;
-(BOOL)allowAbsoluteGestures;
-(BOOL)needsWrapMirror;
-(float)floatValueForKeyIfSupported:(id)arg0 ;
-(id)_presentationName;
-(id)ciFilter;
-(id)ciFilterName;
-(id)createOutputImage:(id)arg0 mirrored:(BOOL)arg1 size:(struct CGSize )arg2 ;
-(id)description;
-(id)init;
-(id)inputKeys;
-(id)localizedName;
-(id)name;
-(struct CGPoint )pointValueForKeyIfSupported:(id)arg0 ;
-(void)applyParametersToCIFilter:(BOOL)arg0 extent:(struct CGRect )arg1 ;
-(void)dealloc;
-(void)handleGestureAtLocations:(struct CGPoint *)arg0 count:(int)arg1 translation:(struct CGPoint )arg2 viewSize:(struct CGSize )arg3 stateBegan:(BOOL)arg4 mirror:(BOOL)arg5 ;
-(void)handlePanGesture:(struct CGPoint )arg0 viewSize:(struct CGSize )arg1 stateBegan:(BOOL)arg2 mirror:(BOOL)arg3 ;
-(void)handlePinchGesture:(float)arg0 stateBegan:(BOOL)arg1 ;
-(void)handleRotateGesture:(float)arg0 stateBegan:(BOOL)arg1 mirror:(BOOL)arg2 ;
-(void)handleTapGesture:(struct CGPoint )arg0 viewSize:(struct CGSize )arg1 mirror:(BOOL)arg2 ;
-(void)renderWithContext:(id)arg0 inputSize:(struct CGSize )arg1 outputRect:(struct CGRect )arg2 mirrored:(BOOL)arg3 ;
-(void)resetInputImage;
-(void)setDefaults;
-(void)setFloatValue:(float)arg0 forKeyIfSupported:(id)arg1 ;
-(void)setPointValue:(struct CGPoint )arg0 forKeyIfSupported:(id)arg1 ;


@end


#endif