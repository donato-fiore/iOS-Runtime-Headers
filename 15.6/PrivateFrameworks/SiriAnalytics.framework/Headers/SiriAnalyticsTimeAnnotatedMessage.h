// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIANALYTICSTIMEANNOTATEDMESSAGE_H
#define SIRIANALYTICSTIMEANNOTATEDMESSAGE_H

@class SISchemaTopLevelUnionType, NSUUID;

#import <Foundation/Foundation.h>


@interface SiriAnalyticsTimeAnnotatedMessage : NSObject

@property (retain, nonatomic) SISchemaTopLevelUnionType *message; // ivar: _message
@property (retain, nonatomic) NSUUID *streamUUID; // ivar: _streamUUID
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp




@end


#endif