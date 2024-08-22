// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMSHAREDLIBRARYIMAGEWELLINDICATORVIEW_H
#define CAMSHAREDLIBRARYIMAGEWELLINDICATORVIEW_H



#import "CAMInstructionLabel.h"

@interface CAMSharedLibraryImageWellIndicatorView : CAMInstructionLabel

@property (nonatomic) NSInteger sharedLibraryMode; // ivar: _sharedLibraryMode


-(CGFloat)_backgroundColorWhiteValue;
-(CGFloat)_defaultCornerRadius;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateText;


@end


#endif