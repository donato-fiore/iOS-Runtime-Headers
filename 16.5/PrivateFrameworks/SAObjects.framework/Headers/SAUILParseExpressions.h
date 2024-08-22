// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUILPARSEEXPRESSIONS_H
#define SAUILPARSEEXPRESSIONS_H

@class NSArray;


#import "SABaseClientBoundCommand.h"
#import "SARemoteDevice.h"

@interface SAUILParseExpressions : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *expressions;
@property (retain, nonatomic) SARemoteDevice *targetDevice;


+(id)parseExpressions;
+(id)parseExpressionsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif