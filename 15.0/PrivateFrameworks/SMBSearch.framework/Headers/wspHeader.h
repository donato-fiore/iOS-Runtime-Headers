// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WSPHEADER_H
#define WSPHEADER_H


#import <Foundation/Foundation.h>


@interface wspHeader : NSObject

@property unsigned int checksum; // ivar: _checksum
@property unsigned int msgid; // ivar: _msgid
@property unsigned int reserved2; // ivar: _reserved2
@property unsigned int status; // ivar: _status


-(id)init;
-(int)decodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesDecoded:(*unsigned int)arg2 ;


@end


#endif