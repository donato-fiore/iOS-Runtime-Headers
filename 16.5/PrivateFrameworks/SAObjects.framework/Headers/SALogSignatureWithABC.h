// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SALOGSIGNATUREWITHABC_H
#define SALOGSIGNATUREWITHABC_H

@class NSString, NSDictionary;


#import "SABaseClientBoundCommand.h"

@interface SALogSignatureWithABC : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *subType;
@property (copy, nonatomic) NSDictionary *subTypeContext;


+(id)logSignatureWithABC;
+(id)logSignatureWithABCWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif