// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRAUDIODATABLOCK_H
#define MRAUDIODATABLOCK_H

@class NSData;
@protocol NSMutableCopying;

#import <Foundation/Foundation.h>

#import "MRAudioBuffer.h"
#import "_MRAudioDataBlockProtobuf.h"

@interface MRAudioDataBlock : NSObject <NSMutableCopying>



@property (readonly, nonatomic) MRAudioBuffer *buffer; // ivar: _buffer
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) float gain; // ivar: _gain
@property (readonly, nonatomic) _MRAudioDataBlockProtobuf *protobuf;
@property (readonly, nonatomic) ? time; // ivar: _time


-(id)_copyWithZone:(struct _NSZone *)arg0 usingConcreteClass:(Class)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_parseBuffer:(id)arg0 ;
-(void)_parseGain:(id)arg0 ;
-(void)_parseTimestamp:(id)arg0 ;


@end


#endif