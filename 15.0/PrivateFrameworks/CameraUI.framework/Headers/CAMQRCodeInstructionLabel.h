// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMQRCODEINSTRUCTIONLABEL_H
#define CAMQRCODEINSTRUCTIONLABEL_H

@class NSArray;


#import "CAMInstructionLabel.h"

@interface CAMQRCodeInstructionLabel : CAMInstructionLabel

@property (nonatomic) NSInteger devicePosition; // ivar: _devicePosition
@property (retain, nonatomic, setter=setMRCResults:) NSArray *mrcResults; // ivar: _mrcResults


+(BOOL)shouldDisplayInstructionForMRCResults:(id)arg0 devicePosition:(NSInteger)arg1 ;
+(id)_textForMRCResults:(id)arg0 devicePosition:(NSInteger)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateTextWithPriorMRCResults:(id)arg0 ;


@end


#endif