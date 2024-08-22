// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAABCONTACTGROUP_H
#define SAABCONTACTGROUP_H

@class NSString;


#import "SADomainObject.h"
#import "SASource.h"

@interface SAABContactGroup : SADomainObject

@property (copy, nonatomic) NSString *groupName;
@property (retain, nonatomic) SASource *groupSource;


+(id)contactGroup;
+(id)contactGroupWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif