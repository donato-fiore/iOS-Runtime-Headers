// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SACFSIGNAL_H
#define SACFSIGNAL_H

@class NSString, NSArray;


#import "SADomainCommand.h"
#import "SACFAbstractClientCommand.h"

@interface SACFSignal : SADomainCommand

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *flowScriptHint;
@property (copy, nonatomic) NSArray *scriptIdentifiers;
@property (retain, nonatomic) SACFAbstractClientCommand *signalPayload;


+(id)signal;
+(id)signalWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif