// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPHCMSSEQUENCERECORD_H
#define _DPHCMSSEQUENCERECORD_H

@class DPCMSSequenceRecord;



@interface _DPHCMSSequenceRecord : DPCMSSequenceRecord

@property (nonatomic) int sequenceBitIndex; // ivar: _sequenceBitIndex


+(id)entityName;
-(BOOL)copyFromManagedObject:(id)arg0 ;
-(BOOL)copyToManagedObject:(id)arg0 ;
-(id)description;
-(id)initWithKey:(id)arg0 plainSequence:(id)arg1 sequence:(id)arg2 sequenceHashIndex:(unsigned short)arg3 sequenceBitIndex:(unsigned int)arg4 creationDate:(CGFloat)arg5 submitted:(BOOL)arg6 objectId:(id)arg7 ;
-(id)jsonString;


@end


#endif