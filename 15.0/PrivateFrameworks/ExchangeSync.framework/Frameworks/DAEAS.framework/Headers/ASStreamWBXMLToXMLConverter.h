// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASSTREAMWBXMLTOXMLCONVERTER_H
#define ASSTREAMWBXMLTOXMLCONVERTER_H

@class NSInputStream, NSOutputStream, NSString;
@protocol NSStreamDelegate;


#import "ASWBXMLToXMLConverter.h"

@interface ASStreamWBXMLToXMLConverter : ASWBXMLToXMLConverter <NSStreamDelegate>

 {
    NSInputStream *_input;
    NSOutputStream *_output;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)runSynchronously;
-(NSInteger)readFromInput;
-(id)initWithWBXMLInput:(id)arg0 forOutput:(id)arg1 usingMetadata:(BOOL)arg2 ;
-(void)dealloc;
-(void)outputData:(id)arg0 ;
-(void)outputString:(id)arg0 ;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;


@end


#endif