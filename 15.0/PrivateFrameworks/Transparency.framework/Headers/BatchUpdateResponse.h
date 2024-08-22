// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BATCHUPDATERESPONSE_H
#define BATCHUPDATERESPONSE_H

@class NSMutableArray, NSString;


#import "GPBMessage.h"

@interface BatchUpdateResponse : GPBMessage

@property (retain, nonatomic) NSMutableArray *responsesArray;
@property (readonly, nonatomic) NSUInteger responsesArray_Count;
@property (copy, nonatomic) NSString *serverEventInfo;
@property (nonatomic) int status;


+(id)descriptor;


@end


#endif