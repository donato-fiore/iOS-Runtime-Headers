// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDATASTREAMFRAGMENT_H
#define HMDDATASTREAMFRAGMENT_H

@class HMFObject, NSData, NSNumber, NSString;
@protocol NSCopying;



@interface HMDDataStreamFragment : HMFObject <NSCopying>



@property (readonly, copy) NSData *data; // ivar: _data
@property (readonly, getter=isInitial) BOOL initial;
@property (readonly, copy) NSNumber *sequenceNumber; // ivar: _sequenceNumber
@property (readonly, copy) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithData:(id)arg0 sequenceNumber:(id)arg1 type:(id)arg2 ;


@end


#endif