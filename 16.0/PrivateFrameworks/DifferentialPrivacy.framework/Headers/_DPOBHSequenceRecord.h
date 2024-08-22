// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPOBHSEQUENCERECORD_H
#define _DPOBHSEQUENCERECORD_H

@class DPOBHRecord, NSString;



@interface _DPOBHSequenceRecord : DPOBHRecord

@property (retain, nonatomic) NSString *plainSequence; // ivar: _plainSequence
@property (nonatomic) NSInteger sequenceBitPosition; // ivar: _sequenceBitPosition
@property (nonatomic) BOOL sequenceBitValue; // ivar: _sequenceBitValue


+(id)entityName;
+(id)recordWithKey:(id)arg0 sequence:(id)arg1 bitPosition:(NSInteger)arg2 bitValue:(BOOL)arg3 creationDate:(CGFloat)arg4 submitted:(BOOL)arg5 objectId:(id)arg6 ;
-(BOOL)copyFromManagedObject:(id)arg0 ;
-(BOOL)copyToManagedObject:(id)arg0 ;
-(id)description;
-(id)initWithKey:(id)arg0 sequence:(id)arg1 bitPosition:(NSInteger)arg2 bitValue:(BOOL)arg3 creationDate:(CGFloat)arg4 submitted:(BOOL)arg5 objectId:(id)arg6 ;
-(id)jsonString;


@end


#endif