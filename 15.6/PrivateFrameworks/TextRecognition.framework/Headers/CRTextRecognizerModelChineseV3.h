// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRTEXTRECOGNIZERMODELCHINESEV3_H
#define CRTEXTRECOGNIZERMODELCHINESEV3_H



#import "CRTextSequenceRecognizerTopKModelEspresso.h"

@interface CRTextRecognizerModelChineseV3 : CRTextSequenceRecognizerTopKModelEspresso



+(id)defaultURLOfModelInThisBundle;
-(BOOL)supportCharacterBoxes;


@end


#endif