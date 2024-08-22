// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDATASTREAMFRAGMENTCHUNK_H
#define HMDDATASTREAMFRAGMENTCHUNK_H

@class HMFObject, NSData, NSDictionary, NSNumber, NSString;
@protocol NSCopying;



@interface HMDDataStreamFragmentChunk : HMFObject <NSCopying>



@property (readonly) NSData *data; // ivar: _data
@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly, copy) NSNumber *fragmentSequenceNumber; // ivar: _fragmentSequenceNumber
@property (readonly, getter=isLast) BOOL last; // ivar: _last
@property (readonly, copy) NSNumber *sequenceNumber; // ivar: _sequenceNumber
@property (readonly, copy) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithData:(id)arg0 sequenceNumber:(id)arg1 fragmentSequenceNumber:(id)arg2 type:(id)arg3 isLast:(BOOL)arg4 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif