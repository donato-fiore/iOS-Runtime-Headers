// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPCMSWORDRECORD_H
#define _DPCMSWORDRECORD_H

@class DPCMSSequenceRecord, NSData, NSString;



@interface _DPCMSWordRecord : DPCMSSequenceRecord

@property (retain, nonatomic) NSData *fragment; // ivar: _fragment
@property (nonatomic) short fragmentHashIndex; // ivar: _fragmentHashIndex
@property (nonatomic) short fragmentPosition; // ivar: _fragmentPosition
@property (copy, nonatomic) NSString *plainFragment; // ivar: _plainFragment


+(id)entityName;
-(BOOL)copyFromManagedObject:(id)arg0 ;
-(BOOL)copyToManagedObject:(id)arg0 ;
-(id)description;
-(id)initWithKey:(id)arg0 plainSequence:(id)arg1 sequence:(id)arg2 sequenceHashIndex:(unsigned short)arg3 plainFragment:(id)arg4 fragment:(id)arg5 fragmentHashIndex:(unsigned short)arg6 fragmentPosition:(unsigned short)arg7 creationDate:(CGFloat)arg8 submitted:(BOOL)arg9 objectId:(id)arg10 ;
-(id)jsonString;


@end


#endif