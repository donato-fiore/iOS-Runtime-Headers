// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDDATASTREAMFRAGMENTASSEMBLER_H
#define HMDDATASTREAMFRAGMENTASSEMBLER_H

@class HMFObject, NSNumber, NSMutableData, NSString;


#import "HMDDataStreamFragment.h"

@interface HMDDataStreamFragmentAssembler : HMFObject

@property (copy) HMDDataStreamFragment *assembledFragment; // ivar: _assembledFragment
@property (copy) NSNumber *currentChunkSequenceNumber; // ivar: _currentChunkSequenceNumber
@property (readonly, copy) NSMutableData *data; // ivar: _data
@property (readonly, copy) NSNumber *sequenceNumber; // ivar: _sequenceNumber
@property (readonly, copy) NSString *type; // ivar: _type


-(BOOL)addFragmentChunk:(id)arg0 error:(*id)arg1 ;
-(id)attributeDescriptions;
-(id)initWithSequenceNumber:(id)arg0 type:(id)arg1 ;


@end


#endif