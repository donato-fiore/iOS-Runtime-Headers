// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REVISIONLOGINCLUSIONPROOFRESPONSE_H
#define REVISIONLOGINCLUSIONPROOFRESPONSE_H

@class NSMutableArray, NSDictionary;


#import "GPBMessage.h"
#import "LogEntry.h"

@interface RevisionLogInclusionProofResponse : GPBMessage

@property (nonatomic) BOOL hasTopLevelTreeEntry;
@property (retain, nonatomic) NSMutableArray *logEntryArray;
@property (readonly, nonatomic) NSUInteger logEntryArray_Count;
@property (readonly) NSDictionary *metadata;
@property (nonatomic) int status;
@property (retain, nonatomic) LogEntry *topLevelTreeEntry;


+(id)descriptor;


@end


#endif