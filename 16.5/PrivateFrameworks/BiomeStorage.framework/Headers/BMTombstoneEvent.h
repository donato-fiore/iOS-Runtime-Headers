// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMTOMBSTONEEVENT_H
#define BMTOMBSTONEEVENT_H

@class NSString;
@protocol BMProtoBufWrapper, NSSecureCoding, BMStoreData;

#import <Foundation/Foundation.h>


@interface BMTombstoneEvent : NSObject <BMProtoBufWrapper, NSSecureCoding, BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger deletionReason; // ivar: _deletionReason
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger length; // ivar: _length
@property (readonly, nonatomic) NSUInteger offset; // ivar: _offset
@property (readonly, nonatomic) NSString *processName; // ivar: _processName
@property (readonly, nonatomic) NSString *segmentName; // ivar: _segmentName
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithSegmentName:(id)arg0 offset:(NSUInteger)arg1 length:(NSUInteger)arg2 reason:(NSUInteger)arg3 processName:(id)arg4 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithSegmentName:(id)arg0 offset:(NSUInteger)arg1 length:(NSUInteger)arg2 ;
-(id)initWithSegmentName:(id)arg0 offset:(NSUInteger)arg1 length:(NSUInteger)arg2 reason:(NSUInteger)arg3 ;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif