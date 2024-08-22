// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSPROTOBUF_H
#define IDSPROTOBUF_H

@class NSMutableDictionary, NSData;
@protocol NSCoding;

#import <Foundation/Foundation.h>

#import "IDSMessageContext.h"

@interface IDSProtobuf : NSObject <NSCoding>

 {
    NSMutableDictionary *_protoBufParams;
}


@property (retain, nonatomic) IDSMessageContext *context;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) BOOL isResponse;
@property (nonatomic) unsigned short type;
@property (retain, nonatomic) NSData *uncompressedData; // ivar: _uncompressedData


+(id)keyRepresentationForType:(unsigned short)arg0 isResponse:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationWithUncompressedData;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithProtobufData:(id)arg0 type:(unsigned short)arg1 isResponse:(BOOL)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif