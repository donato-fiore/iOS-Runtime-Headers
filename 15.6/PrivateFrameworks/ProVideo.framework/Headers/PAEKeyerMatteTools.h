// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAEKEYERMATTETOOLS_H
#define PAEKEYERMATTETOOLS_H


#import <Foundation/Foundation.h>


@interface PAEKeyerMatteTools : NSObject



-(BOOL)addAdvancedParametersWithParamAPI:(id)arg0 hideSimpleViewParam:(unsigned int)arg1 ;
-(BOOL)addLevelsParametersWithParamAPI:(id)arg0 hideSimpleViewParam:(unsigned int)arg1 ;
-(BOOL)addParametersWithParamAPI:(id)arg0 hideSimpleViewParam:(unsigned int)arg1 isLumaKey:(BOOL)arg2 ;
-(BOOL)doMatteManipulationWithInfo:(struct ? )arg0 pixelAspectRatio:(float)arg1 fieldHeight:(float)arg2 doInvertMatte:(BOOL)arg3 inputIsInverted:(BOOL)arg4 fillHoles:(BOOL)arg5 scaling:(BOOL)arg6 blendingGamma:(float)arg7 blackLevel:(CGFloat)arg8 whiteLevel:(CGFloat)arg9 gammaLevel:(CGFloat)arg10 preKeyedInputNode:(*void)arg11 outputNode:(*void)arg12 ;
-(BOOL)doMatteManipulationWithParamAPI:(id)arg0 withPrivateParamAPI:(id)arg1 withInfo:(struct ? )arg2 pixelAspectRatio:(float)arg3 fieldHeight:(float)arg4 doInvertMatte:(BOOL)arg5 inputIsInverted:(BOOL)arg6 fillHoles:(BOOL)arg7 scaling:(BOOL)arg8 blendingGamma:(float)arg9 preKeyedInputNode:(*void)arg10 outputNode:(*void)arg11 ;
-(id)init;


@end


#endif