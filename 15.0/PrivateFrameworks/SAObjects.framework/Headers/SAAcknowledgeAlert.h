// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAACKNOWLEDGEALERT_H
#define SAACKNOWLEDGEALERT_H



#import "SABaseClientBoundCommand.h"
#import "SADomainObject.h"

@interface SAAcknowledgeAlert : SABaseClientBoundCommand

@property (retain, nonatomic) SADomainObject *object;


+(id)acknowledgeAlert;
+(id)acknowledgeAlertWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif