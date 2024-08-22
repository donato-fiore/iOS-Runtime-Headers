// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMGENERICMESSAGELOGACTION_H
#define NMGENERICMESSAGELOGACTION_H

@class NSString;


#import "NMLogAction.h"

@interface NMGenericMessageLogAction : NMLogAction {
    NSString *_message;
}




+(id)logActionWithMessage:(id)arg0 ;
-(id)initWithMessage:(id)arg0 ;
-(id)logMessage;


@end


#endif