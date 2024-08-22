// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKSIMPLETLVRECORD_H
#define TKSIMPLETLVRECORD_H



#import "TKTLVRecord.h"

@interface TKSimpleTLVRecord : TKTLVRecord



+(id)parseFromDataSource:(id)arg0 error:(*id)arg1 ;
-(id)initWithTag:(unsigned char)arg0 value:(id)arg1 ;


@end


#endif