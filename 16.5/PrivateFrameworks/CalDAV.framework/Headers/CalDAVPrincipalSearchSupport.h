// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVPRINCIPALSEARCHSUPPORT_H
#define CALDAVPRINCIPALSEARCHSUPPORT_H


#import <Foundation/Foundation.h>


@interface CalDAVPrincipalSearchSupport : NSObject



+(id)nameForWellKnownType:(int)arg0 ;
+(id)namespaceAndNameForWellKnownType:(int)arg0 ;
+(id)namespaceForWellKnownType:(int)arg0 ;
+(id)parserMappingsWithServerSupportSet:(id)arg0 includeEmail:(BOOL)arg1 ;
+(id)propertySearchItemForWellKnownType:(int)arg0 ;
+(id)resultTypeForRecordType:(id)arg0 ;


@end


#endif