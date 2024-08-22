// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASFILEDESCRIPTORWBXMLTOXMLCONVERTER_H
#define ASFILEDESCRIPTORWBXMLTOXMLCONVERTER_H



#import "ASWBXMLToXMLConverter.h"

@interface ASFileDescriptorWBXMLToXMLConverter : ASWBXMLToXMLConverter

@property (nonatomic) int input; // ivar: _input
@property (nonatomic) int output; // ivar: _output


-(BOOL)runSynchronously;
-(NSInteger)readFromInput;
-(id)initWithInputFD:(int)arg0 outputFD:(int)arg1 usingMetadata:(BOOL)arg2 ;
-(void)outputData:(id)arg0 ;
-(void)outputString:(id)arg0 ;


@end


#endif