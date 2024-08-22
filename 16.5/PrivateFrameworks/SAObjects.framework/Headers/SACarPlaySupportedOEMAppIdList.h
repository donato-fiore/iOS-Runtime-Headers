// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SACARPLAYSUPPORTEDOEMAPPIDLIST_H
#define SACARPLAYSUPPORTEDOEMAPPIDLIST_H

@class NSArray;


#import "SADomainObject.h"

@interface SACarPlaySupportedOEMAppIdList : SADomainObject

@property (copy, nonatomic) NSArray *appIds;


+(id)carPlaySupportedOEMAppIdList;
+(id)carPlaySupportedOEMAppIdListWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif