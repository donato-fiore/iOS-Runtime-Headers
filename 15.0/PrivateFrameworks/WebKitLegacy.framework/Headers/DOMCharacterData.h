// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOMCHARACTERDATA_H
#define DOMCHARACTERDATA_H

@class NSString;


#import "DOMNode.h"

@interface DOMCharacterData : DOMNode

@property (copy) NSString *data;
@property (readonly) unsigned int length;


-(id)nextElementSibling;
-(id)previousElementSibling;
-(id)substringData:(unsigned int)arg0 ;
-(id)substringData:(unsigned int)arg0 length:(unsigned int)arg1 ;
-(void)appendData:(id)arg0 ;
-(void)deleteData:(unsigned int)arg0 ;
-(void)deleteData:(unsigned int)arg0 length:(unsigned int)arg1 ;
-(void)insertData:(unsigned int)arg0 ;
-(void)insertData:(unsigned int)arg0 data:(id)arg1 ;
-(void)remove;
-(void)replaceData:(unsigned int)arg0 ;
-(void)replaceData:(unsigned int)arg0 length:(unsigned int)arg1 data:(id)arg2 ;


@end


#endif