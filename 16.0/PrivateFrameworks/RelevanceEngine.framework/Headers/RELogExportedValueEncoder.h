// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RELOGEXPORTEDVALUEENCODER_H
#define RELOGEXPORTEDVALUEENCODER_H



#import "REExportedValueEncoder.h"

@interface RELogExportedValueEncoder : REExportedValueEncoder



+(id)_dateFormatter;
// -(void)writeArrayValuePairToStream:(id)arg0 valueWriter:(id)arg1 isLast:(unk)arg2  ;
-(void)writeDate:(id)arg0 toStream:(id)arg1 ;
// -(void)writeDictionaryValuePairToStream:(id)arg0 keyWriter:(id)arg1 valueWriter:(unk)arg2 isLast:(id)arg3  ;
-(void)writeNullToStream:(id)arg0 ;
-(void)writeNumber:(id)arg0 toStream:(id)arg1 ;
-(void)writeObjectStart:(id)arg0 toStream:(id)arg1 ;
// -(void)writeObjectValuePairToStream:(id)arg0 keyWriter:(id)arg1 valueWriter:(unk)arg2 isLast:(id)arg3  ;
-(void)writeString:(id)arg0 toStream:(id)arg1 ;


@end


#endif