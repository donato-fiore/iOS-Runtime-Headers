// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASSUSPENDCLIENTENDPOINTER_H
#define SASSUSPENDCLIENTENDPOINTER_H

@class NSNumber;


#import "SABaseClientBoundCommand.h"

@interface SASSuspendClientEndpointer : SABaseClientBoundCommand

@property (copy, nonatomic) NSNumber *audioProcessedMs;
@property (copy, nonatomic) NSNumber *suspendDurationMs;


+(id)suspendClientEndpointer;
+(id)suspendClientEndpointerWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif