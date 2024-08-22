// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPOBHSEQUENCEMO_H
#define _DPOBHSEQUENCEMO_H

@class DPOBHRecordMO, NSString;



@interface _DPOBHSequenceMO : DPOBHRecordMO

@property (copy, nonatomic) NSString *plainSequence;
@property (nonatomic) NSInteger sequenceBitPosition;
@property (nonatomic) BOOL sequenceBitValue;


+(id)fetchRequest;


@end


#endif