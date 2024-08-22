// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSIRIMEMORYREFERENCERESOLUTIONENTITYVALUE_H
#define BMSIRIMEMORYREFERENCERESOLUTIONENTITYVALUE_H

@class NSData;
@protocol BMProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface BMSiriMemoryReferenceResolutionEntityValue : NSObject <BMProtoBufWrapper>



@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, copy, nonatomic) NSData *valueData; // ivar: _valueData


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)encodeAsProto;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 valueData:(id)arg1 ;
-(id)proto;
-(id)serialize;


@end


#endif