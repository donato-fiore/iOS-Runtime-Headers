// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHTEXTFIELDTYPESWITCHSTEP_H
#define CHTEXTFIELDTYPESWITCHSTEP_H



#import "CHPostprocessingStep.h"
#import "CHPostProcessingManager.h"

@interface CHTextFieldTypeSwitchStep : CHPostprocessingStep

@property (retain, nonatomic) CHPostProcessingManager *asciiProcessor; // ivar: _asciiProcessor
@property (retain, nonatomic) CHPostProcessingManager *defaultProcessor; // ivar: _defaultProcessor
@property (retain, nonatomic) CHPostProcessingManager *digitProcessor; // ivar: _digitProcessor
@property (retain, nonatomic) CHPostProcessingManager *emailProcessor; // ivar: _emailProcessor
@property (retain, nonatomic) CHPostProcessingManager *equationProcessor; // ivar: _equationProcessor
@property (retain, nonatomic) CHPostProcessingManager *phoneProcessor; // ivar: _phoneProcessor
@property (retain, nonatomic) CHPostProcessingManager *urlProcessor; // ivar: _urlProcessor
@property (retain, nonatomic) CHPostProcessingManager *usernameProcessor; // ivar: _usernameProcessor


-(id)initProcessorDefault:(id)arg0 processorDigits:(id)arg1 processorPhone:(id)arg2 processorUsername:(id)arg3 processorEmail:(id)arg4 processorURL:(id)arg5 processorASCII:(id)arg6 processorEquation:(id)arg7 ;
-(id)process:(id)arg0 ;
-(id)process:(id)arg0 withProcessor:(id)arg1 ;
-(void)dealloc;


@end


#endif