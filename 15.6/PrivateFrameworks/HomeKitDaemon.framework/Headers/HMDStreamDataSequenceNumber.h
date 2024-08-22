// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSTREAMDATASEQUENCENUMBER_H
#define HMDSTREAMDATASEQUENCENUMBER_H

@class HMFObject;
@protocol NSCopying;



@interface HMDStreamDataSequenceNumber : HMFObject <NSCopying>



@property (readonly, getter=isInitial) BOOL initial;
@property (readonly) NSUInteger value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithStreamDataDictionary:(id)arg0 ;
-(id)initWithValue:(NSUInteger)arg0 ;


@end


#endif