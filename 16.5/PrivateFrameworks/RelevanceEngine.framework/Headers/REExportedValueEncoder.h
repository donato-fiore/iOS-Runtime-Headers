// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REEXPORTEDVALUEENCODER_H
#define REEXPORTEDVALUEENCODER_H


#import <Foundation/Foundation.h>


@interface REExportedValueEncoder : NSObject {
    NSUInteger _options;
}




-(BOOL)writesArrayHeader;
-(BOOL)writesDictionaryHeader;
-(id)_namesArrayFromArray:(id)arg0 ;
-(id)dataFromExportedValue:(id)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 ;
// -(void)_writeCollection:(id)arg0 toStream:(id)arg1 startBlock:(id)arg2 writerBlock:(unk)arg3 endBlock:(id)arg4 wantsHeader:(unk)arg5 depth:(id)arg6  ;
-(void)_writeValue:(id)arg0 toStream:(id)arg1 depth:(NSUInteger)arg2 needsIndent:(BOOL)arg3 ;
-(void)writeArrayEndToStream:(id)arg0 ;
-(void)writeArrayStartToStream:(id)arg0 ;
// -(void)writeArrayValuePairToStream:(id)arg0 valueWriter:(id)arg1 isLast:(unk)arg2  ;
-(void)writeDate:(id)arg0 toStream:(id)arg1 ;
-(void)writeDictionaryEndToStream:(id)arg0 ;
-(void)writeDictionaryStartToStream:(id)arg0 ;
// -(void)writeDictionaryValuePairToStream:(id)arg0 keyWriter:(id)arg1 valueWriter:(unk)arg2 isLast:(id)arg3  ;
-(void)writeExportedValue:(id)arg0 toStream:(id)arg1 ;
-(void)writeNullToStream:(id)arg0 ;
-(void)writeNumber:(id)arg0 toStream:(id)arg1 ;
-(void)writeObjectEnd:(id)arg0 toStream:(id)arg1 ;
-(void)writeObjectStart:(id)arg0 toStream:(id)arg1 ;
// -(void)writeObjectValuePairToStream:(id)arg0 keyWriter:(id)arg1 valueWriter:(unk)arg2 isLast:(id)arg3  ;
-(void)writeString:(id)arg0 toStream:(id)arg1 ;
-(void)writeUnsupportedObject:(id)arg0 toStream:(id)arg1 ;


@end


#endif