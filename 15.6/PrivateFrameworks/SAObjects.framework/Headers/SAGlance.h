// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAGLANCE_H
#define SAGLANCE_H

@class NSString, NSDictionary;


#import "SADomainObject.h"

@interface SAGlance : SADomainObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *glanceDisplayName;
@property (copy, nonatomic) NSString *glanceId;
@property (copy, nonatomic) NSDictionary *localizedGlanceDisplayNameMap;


+(id)glance;
+(id)glanceWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif