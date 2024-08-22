// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASOURCE_H
#define SASOURCE_H

@class NSString, NSNumber;


#import "SADomainObject.h"

@interface SASource : SADomainObject

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) NSString *domainIdentifier;
@property (copy, nonatomic) NSNumber *remote;


+(id)source;
+(id)sourceWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif