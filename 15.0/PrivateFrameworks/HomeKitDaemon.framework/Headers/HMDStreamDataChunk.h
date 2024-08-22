// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSTREAMDATACHUNK_H
#define HMDSTREAMDATACHUNK_H

@class HMFObject, NSData, NSNumber;



@interface HMDStreamDataChunk : HMFObject

@property (readonly, copy) NSData *data; // ivar: _data
@property (readonly) BOOL isLast; // ivar: _isLast
@property (readonly, copy) NSNumber *sequenceNumber; // ivar: _sequenceNumber


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithSequenceNumber:(id)arg0 data:(id)arg1 isLast:(BOOL)arg2 ;
-(id)initWithStreamDataDictionary:(id)arg0 ;


@end


#endif