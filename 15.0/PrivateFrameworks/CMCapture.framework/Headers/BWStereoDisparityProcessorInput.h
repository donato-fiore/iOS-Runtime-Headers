// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSTEREODISPARITYPROCESSORINPUT_H
#define BWSTEREODISPARITYPROCESSORINPUT_H

@protocol BWStereoDisparityProcessorInputDelegate;


#import "BWStillImageProcessorInput.h"

@interface BWStereoDisparityProcessorInput : BWStillImageProcessorInput

@property (readonly, nonatomic) *opaqueCMSampleBuffer auxiliarySbuf; // ivar: _auxiliarySbuf
@property (retain, nonatomic) NSObject<BWStereoDisparityProcessorInputDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL emitAuxiliaryInput; // ivar: _emitAuxiliaryInput
@property (nonatomic) BOOL equalizeTeleGainToMatchReference; // ivar: _equalizeTeleGainToMatchReference
@property (readonly, nonatomic) *opaqueCMSampleBuffer referenceSbuf; // ivar: _referenceSbuf


-(id)description;
-(id)initWithSettings:(id)arg0 portType:(id)arg1 ;
-(void)addSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;


@end


#endif