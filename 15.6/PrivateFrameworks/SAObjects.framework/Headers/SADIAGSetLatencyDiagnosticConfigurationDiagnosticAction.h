// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SADIAGSETLATENCYDIAGNOSTICCONFIGURATIONDIAGNOSTICACTION_H
#define SADIAGSETLATENCYDIAGNOSTICCONFIGURATIONDIAGNOSTICACTION_H

@class NSString, NSURL;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SADIAGSetLatencyDiagnosticConfigurationDiagnosticAction : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *uri;
@property (copy, nonatomic) NSString *verb;


+(id)setLatencyDiagnosticConfigurationDiagnosticAction;
+(id)setLatencyDiagnosticConfigurationDiagnosticActionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif