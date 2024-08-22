// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REVISIONLOGINCLUSIONPROOFREQUEST_H
#define REVISIONLOGINCLUSIONPROOFREQUEST_H



#import "GPBMessage.h"
#import "GPBUInt64Array.h"

@interface RevisionLogInclusionProofRequest : GPBMessage

@property (nonatomic) int application;
@property (nonatomic) int logType;
@property (retain, nonatomic) GPBUInt64Array *revisionArray;
@property (readonly, nonatomic) NSUInteger revisionArray_Count;
@property (nonatomic) int version;


+(id)descriptor;


@end


#endif