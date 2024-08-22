// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSTREAMDATA_H
#define HMDSTREAMDATA_H

@class HMFObject, NSData, NSString;


#import "HMDStreamDataSequenceNumber.h"

@interface HMDStreamData : HMFObject

@property (readonly, copy) NSData *data; // ivar: _data
@property (readonly, copy) HMDStreamDataSequenceNumber *sequenceNumber; // ivar: _sequenceNumber
@property (readonly, copy) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSequenceNumber:(id)arg0 data:(id)arg1 type:(id)arg2 ;


@end


#endif