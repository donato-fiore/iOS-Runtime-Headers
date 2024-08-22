// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAPARSECCONTEXT_H
#define SAPARSECCONTEXT_H

@class NSData, NSDictionary, NSString;


#import "SADomainObject.h"

@interface SAParsecContext : SADomainObject

@property (copy, nonatomic) NSData *httpBody;
@property (copy, nonatomic) NSDictionary *httpHeaders;
@property (copy, nonatomic) NSString *httpMethod;
@property (copy, nonatomic) NSString *httpUrl;


+(id)parsecContext;
+(id)parsecContextWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif