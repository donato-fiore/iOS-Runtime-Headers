// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATACTIVEIDSSERVICECONNECTIONCONTENTRETRANSMIT_H
#define CATACTIVEIDSSERVICECONNECTIONCONTENTRETRANSMIT_H

@class NSDictionary, NSArray;
@protocol CATActiveIDSServiceConnectionMessageContent;

#import <Foundation/Foundation.h>


@interface CATActiveIDSServiceConnectionContentRetransmit : NSObject <CATActiveIDSServiceConnectionMessageContent>



@property (readonly, nonatomic) NSInteger contentType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, copy, nonatomic) NSArray *sequenceNumbers; // ivar: _sequenceNumbers


+(id)instanceWithDictionary:(id)arg0 ;
-(id)initWithSequenceNumbers:(id)arg0 ;


@end


#endif