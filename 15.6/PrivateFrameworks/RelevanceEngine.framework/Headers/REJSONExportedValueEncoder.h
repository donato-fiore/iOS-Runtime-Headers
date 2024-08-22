// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REJSONEXPORTEDVALUEENCODER_H
#define REJSONEXPORTEDVALUEENCODER_H



#import "REExportedValueEncoder.h"

@interface REJSONExportedValueEncoder : REExportedValueEncoder



+(id)_dateFormatter;
-(BOOL)writesArrayHeader;
-(BOOL)writesDictionaryHeader;
-(void)_writeValueAsJSON:(id)arg0 toStream:(id)arg1 ;
-(void)writeArrayEndToStream:(id)arg0 ;
-(void)writeArrayStartToStream:(id)arg0 ;
// -(void)writeArrayValuePairToStream:(id)arg0 valueWriter:(id)arg1 isLast:(unk)arg2  ;
-(void)writeDate:(id)arg0 toStream:(id)arg1 ;
-(void)writeDictionaryEndToStream:(id)arg0 ;
-(void)writeDictionaryStartToStream:(id)arg0 ;
// -(void)writeDictionaryValuePairToStream:(id)arg0 keyWriter:(id)arg1 valueWriter:(unk)arg2 isLast:(id)arg3  ;
-(void)writeNullToStream:(id)arg0 ;
-(void)writeNumber:(id)arg0 toStream:(id)arg1 ;
-(void)writeObjectEnd:(id)arg0 toStream:(id)arg1 ;
-(void)writeObjectStart:(id)arg0 toStream:(id)arg1 ;
// -(void)writeObjectValuePairToStream:(id)arg0 keyWriter:(id)arg1 valueWriter:(unk)arg2 isLast:(id)arg3  ;
-(void)writeString:(id)arg0 toStream:(id)arg1 ;


@end


#endif