// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFPGRAPHICS_H
#define MFPGRAPHICS_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "MFPGraphicsState.h"
#import "MFPObjectTable.h"

@interface MFPGraphics : NSObject {
    CGRect mCanvas;
    int mHorzDpi;
    int mVertDpi;
    MFPGraphicsState *mCurrentState;
    NSMutableArray *mStateStack;
    MFPObjectTable *mObjectTable;
    NSMutableDictionary *mAvailableFonts;
}




+(float)unitsPerInch:(int)arg0 ;
-(BOOL)areThereOpenContainers;
-(float)pixelsPerUnit:(int)arg0 direction:(int)arg1 ;
-(id)currentState;
-(id)fontNameForUppercaseFontName:(id)arg0 ;
-(id)initWithCanvas:(struct CGRect )arg0 ;
-(id)objectTable;
-(struct CGAffineTransform )pageTransformWithScale:(float)arg0 unit:(int)arg1 ;
-(struct CGRect )canvas;
-(void)beginContainerNoParamsWithId:(unsigned int)arg0 ;
-(void)beginContainerWithId:(unsigned int)arg0 boundsInParent:(struct CGRect )arg1 bounds:(struct CGRect )arg2 boundsUnit:(int)arg3 ;
-(void)beginContainerWithId:(unsigned int)arg0 containerTransform:(struct CGAffineTransform )arg1 ;
-(void)fillPath:(id)arg0 brush:(id)arg1 ;
-(void)restoreGraphicsStateOrEndContainerWithId:(unsigned int)arg0 ;
-(void)saveGraphicsStateWithId:(unsigned int)arg0 ;
-(void)setHorizontalDpi:(int)arg0 verticalDpi:(int)arg1 ;
-(void)strokePath:(id)arg0 pen:(id)arg1 ;


@end


#endif