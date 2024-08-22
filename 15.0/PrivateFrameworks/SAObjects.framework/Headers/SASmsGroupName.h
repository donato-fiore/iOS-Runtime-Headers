// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASMSGROUPNAME_H
#define SASMSGROUPNAME_H

@class NSString;


#import "SADomainObject.h"

@interface SASmsGroupName : SADomainObject

@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupNameId;


+(id)groupNameWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif