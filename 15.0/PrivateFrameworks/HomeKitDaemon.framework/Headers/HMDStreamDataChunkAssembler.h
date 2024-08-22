// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSTREAMDATACHUNKASSEMBLER_H
#define HMDSTREAMDATACHUNKASSEMBLER_H

@class HMFObject, NSNumber, NSMutableData, NSString;


#import "HMDStreamData.h"
#import "HMDStreamDataSequenceNumber.h"

@interface HMDStreamDataChunkAssembler : HMFObject

@property (copy) HMDStreamData *assembledData; // ivar: _assembledData
@property (copy) NSNumber *currentSequenceNumber; // ivar: _currentSequenceNumber
@property (readonly, copy) NSMutableData *data; // ivar: _data
@property (readonly, copy) HMDStreamDataSequenceNumber *dataSequenceNumber; // ivar: _dataSequenceNumber
@property (readonly, copy) NSString *type; // ivar: _type


-(BOOL)addDataChunk:(id)arg0 error:(*id)arg1 ;
-(id)attributeDescriptions;
-(id)initWithDataSequenceNumber:(id)arg0 initialStreamDataChunk:(id)arg1 ;
-(void)createAssembledDataIfNecessaryForDataChunk:(id)arg0 ;


@end


#endif