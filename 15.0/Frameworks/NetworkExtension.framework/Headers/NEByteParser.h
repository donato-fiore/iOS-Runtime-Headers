// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEBYTEPARSER_H
#define NEBYTEPARSER_H

@class NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NEByteParser : NSObject <NSCopying>



@property (readonly) char * bytes; // ivar: _bytes
@property char * cursor; // ivar: _cursor
@property (readonly) NSData *data; // ivar: _data
@property NSUInteger offset; // ivar: _offset


-(BOOL)advanceBy:(NSUInteger)arg0 andCopyTo:(*void)arg1 ;
-(BOOL)copyBytes:(NSUInteger)arg0 to:(*void)arg1 ;
-(char *)parseBytes:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)parseAddressWithFamily:(unsigned char)arg0 ;
-(id)parseDomainName;
-(unsigned char)parse8Bits:(*BOOL)arg0 ;
-(unsigned int)parse32Bits:(*BOOL)arg0 ;
-(unsigned short)parse16Bits:(*BOOL)arg0 ;


@end


#endif