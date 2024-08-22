// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMIMAGEANALYSISINSTRUCTIONLABEL_H
#define CAMIMAGEANALYSISINSTRUCTIONLABEL_H



#import "CAMInstructionLabel.h"

@interface CAMImageAnalysisInstructionLabel : CAMInstructionLabel

@property (nonatomic) NSInteger instruction; // ivar: _instruction


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateText;


@end


#endif