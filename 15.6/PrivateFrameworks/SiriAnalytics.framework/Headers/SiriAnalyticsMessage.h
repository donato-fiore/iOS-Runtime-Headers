// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIANALYTICSMESSAGE_H
#define SIRIANALYTICSMESSAGE_H

@class SISchemaTopLevelUnionType;

#import <Foundation/Foundation.h>

#import "SiriAnalyticsLogicalTimeStamp.h"

@interface SiriAnalyticsMessage : NSObject

@property (retain, nonatomic) SiriAnalyticsLogicalTimeStamp *logicalTimestamp; // ivar: _logicalTimestamp
@property (retain, nonatomic) SISchemaTopLevelUnionType *underlyingMessage; // ivar: _underlyingMessage


-(id)storageRepresentation;


@end


#endif