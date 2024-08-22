// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPBUNKNOWNFIELDSET_H
#define TRIPBUNKNOWNFIELDSET_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIPBUnknownFieldSet : NSObject <NSCopying>

 {
    *__CFDictionary fields_;
}




+(BOOL)isFieldTag:(int)arg0 ;
-(BOOL)hasField:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)mergeFieldFrom:(int)arg0 input:(id)arg1 ;
-(NSUInteger)countOfFields;
-(NSUInteger)hash;
-(NSUInteger)serializedSize;
-(NSUInteger)serializedSizeAsMessageSet;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)data;
-(id)description;
-(id)getField:(int)arg0 ;
-(id)mutableFieldForNumber:(int)arg0 create:(BOOL)arg1 ;
-(id)sortedFields;
-(void)addField:(id)arg0 ;
-(void)addUnknownMapEntry:(int)arg0 value:(id)arg1 ;
-(void)dealloc;
-(void)getTags:(*int)arg0 ;
-(void)mergeFromCodedInputStream:(id)arg0 ;
-(void)mergeFromData:(id)arg0 ;
-(void)mergeMessageSetMessage:(int)arg0 data:(id)arg1 ;
-(void)mergeUnknownFields:(id)arg0 ;
-(void)mergeVarintField:(int)arg0 value:(int)arg1 ;
-(void)writeAsMessageSetTo:(id)arg0 ;
-(void)writeToCodedOutputStream:(id)arg0 ;


@end


#endif