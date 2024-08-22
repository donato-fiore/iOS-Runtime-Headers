// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SADOMAINOBJECTPUNCHOUT_H
#define SADOMAINOBJECTPUNCHOUT_H



#import "SABaseClientBoundCommand.h"
#import "SADomainObject.h"

@interface SADomainObjectPunchOut : SABaseClientBoundCommand

@property (retain, nonatomic) SADomainObject *domainItem;


+(id)domainObjectPunchOut;
+(id)domainObjectPunchOutWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif