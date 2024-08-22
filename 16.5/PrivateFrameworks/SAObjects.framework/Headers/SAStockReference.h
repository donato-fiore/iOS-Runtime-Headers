// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASTOCKREFERENCE_H
#define SASTOCKREFERENCE_H

@class NSString;


#import "SADomainObject.h"

@interface SAStockReference : SADomainObject

@property (copy, nonatomic) NSString *companyName;
@property (copy, nonatomic) NSString *symbol;


+(id)reference;
+(id)referenceWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif