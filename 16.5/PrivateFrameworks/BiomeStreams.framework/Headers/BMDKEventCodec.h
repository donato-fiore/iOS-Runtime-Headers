// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMDKEVENTCODEC_H
#define BMDKEVENTCODEC_H


#import <Foundation/Foundation.h>


@interface BMDKEventCodec : NSObject

@property (nonatomic) BOOL decodeMetadata; // ivar: _decodeMetadata


+(id)codecWithVersion:(unsigned int)arg0 ;
-(id)decodeWithProto:(id)arg0 ;
-(id)decodeWithProtoData:(id)arg0 ;
-(id)encodeAsProto:(id)arg0 ;
-(id)encodeAsProtoData:(id)arg0 ;
-(id)init;


@end


#endif