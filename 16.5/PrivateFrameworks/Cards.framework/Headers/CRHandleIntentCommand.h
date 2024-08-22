// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRHANDLEINTENTCOMMAND_H
#define CRHANDLEINTENTCOMMAND_H

@class INIntent;


#import "CRBasicPayloadCommand.h"

@interface CRHandleIntentCommand : CRBasicPayloadCommand

@property (copy, nonatomic) INIntent *intent; // ivar: _intent


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)payload;


@end


#endif