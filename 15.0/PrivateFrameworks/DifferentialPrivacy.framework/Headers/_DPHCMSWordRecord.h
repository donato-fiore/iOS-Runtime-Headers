// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPHCMSWORDRECORD_H
#define _DPHCMSWORDRECORD_H

@class DPCMSWordRecord;



@interface _DPHCMSWordRecord : DPCMSWordRecord

@property (nonatomic) int fragmentBitIndex; // ivar: _fragmentBitIndex
@property (nonatomic) int sequenceBitIndex; // ivar: _sequenceBitIndex


+(id)entityName;
-(BOOL)copyFromManagedObject:(id)arg0 ;
-(BOOL)copyToManagedObject:(id)arg0 ;
-(id)description;
-(id)initWithKey:(id)arg0 plainSequence:(id)arg1 sequence:(id)arg2 sequenceHashIndex:(unsigned short)arg3 sequenceBitIndex:(unsigned int)arg4 plainFragment:(id)arg5 fragment:(id)arg6 fragmentHashIndex:(unsigned short)arg7 fragmentBitIndex:(unsigned int)arg8 fragmentPosition:(unsigned short)arg9 creationDate:(CGFloat)arg10 submitted:(BOOL)arg11 objectId:(id)arg12 ;
-(id)jsonString;


@end


#endif