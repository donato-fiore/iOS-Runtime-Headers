// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPTLVBASE_H
#define HAPTLVBASE_H

@class NSData;


#import "HAPTLVDescription.h"

@interface HAPTLVBase : HAPTLVDescription

@property (readonly, nonatomic) NSData *tlvDatablob; // ivar: _tlvDatablob


-(BOOL)_parse:(id)arg0 ;
-(BOOL)_parseFields:(id)arg0 ;
-(BOOL)_parseFromTLVData;
-(BOOL)_parseMandatory:(id)arg0 optional:(id)arg1 ;
-(id)_parseArray:(id)arg0 result:(*id)arg1 objectCreator:(id)arg2 ;
-(id)initWithTLVData:(id)arg0 ;


@end


#endif