// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPCMSSEQUENCERECORD_H
#define _DPCMSSEQUENCERECORD_H

@class DPCMSRecord, NSString, NSData;



@interface _DPCMSSequenceRecord : DPCMSRecord

@property (copy, nonatomic) NSString *plainSequence; // ivar: _plainSequence
@property (retain, nonatomic) NSData *sequence; // ivar: _sequence
@property (nonatomic) short sequenceHashIndex; // ivar: _sequenceHashIndex


+(id)entityName;
-(BOOL)copyFromManagedObject:(id)arg0 ;
-(BOOL)copyToManagedObject:(id)arg0 ;
-(id)description;
-(id)initWithKey:(id)arg0 plainSequence:(id)arg1 sequence:(id)arg2 sequenceHashIndex:(unsigned short)arg3 creationDate:(CGFloat)arg4 submitted:(BOOL)arg5 objectId:(id)arg6 ;
-(id)jsonString;


@end


#endif