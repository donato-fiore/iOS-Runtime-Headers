// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASMEETINGRESPONSETASK_H
#define ASMEETINGRESPONSETASK_H

@class NSArray;


#import "ASTask.h"

@interface ASMeetingResponseTask : ASTask

@property (retain, nonatomic) NSArray *responseItems; // ivar: _responseItems


-(BOOL)getTopLevelToken:(char *)arg0 outStatusCodePage:(char *)arg1 outStatusToken:(char *)arg2 ;
-(BOOL)processContext:(id)arg0 ;
-(NSInteger)taskStatusForExchangeStatus:(int)arg0 ;
-(id)initWithResponseItems:(id)arg0 ;
-(id)requestBody;
-(int)commandCode;
-(void)finishWithError:(id)arg0 ;


@end


#endif