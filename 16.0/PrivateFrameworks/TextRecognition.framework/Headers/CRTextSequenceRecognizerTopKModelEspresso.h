// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRTEXTSEQUENCERECOGNIZERTOPKMODELESPRESSO_H
#define CRTEXTSEQUENCERECOGNIZERTOPKMODELESPRESSO_H



#import "CRTextSequenceRecognizerModelEspresso.h"

@interface CRTextSequenceRecognizerTopKModelEspresso : CRTextSequenceRecognizerModelEspresso



-(id)outputFromOutputBuffers:(struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> )arg0 featureInfo:(id)arg1 ;
-(id)outputNames;


@end


#endif