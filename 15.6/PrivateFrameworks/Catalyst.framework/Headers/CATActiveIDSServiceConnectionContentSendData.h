// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATACTIVEIDSSERVICECONNECTIONCONTENTSENDDATA_H
#define CATACTIVEIDSSERVICECONNECTIONCONTENTSENDDATA_H

@class NSData, NSDictionary, NSNumber;
@protocol CATActiveIDSServiceConnectionMessageContent;

#import <Foundation/Foundation.h>


@interface CATActiveIDSServiceConnectionContentSendData : NSObject <CATActiveIDSServiceConnectionMessageContent>

 {
    _NSRange mSegmentRange;
    NSData *mUnderlyingDataSegment;
}


@property (readonly, nonatomic) NSInteger contentType;
@property (readonly, nonatomic) NSUInteger dataNumber; // ivar: _dataNumber
@property (readonly, copy, nonatomic) NSData *dataSegment;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSUInteger segmentNumber; // ivar: _segmentNumber
@property (readonly, nonatomic) NSNumber *sequenceNumber; // ivar: _sequenceNumber
@property (readonly, nonatomic) NSUInteger totalSegments; // ivar: _totalSegments


+(id)instanceWithDictionary:(id)arg0 ;
-(id)initWithSequenceNumber:(id)arg0 dataNumber:(NSUInteger)arg1 dataSegment:(id)arg2 segmentRange:(struct _NSRange )arg3 segmentNumber:(NSUInteger)arg4 totalSegments:(NSUInteger)arg5 ;


@end


#endif