// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RWIPROTOCOLDEBUGGERFUNCTIONDETAILS_H
#define RWIPROTOCOLDEBUGGERFUNCTIONDETAILS_H

@class NSString, NSArray;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolDebuggerLocation.h"

@interface RWIProtocolDebuggerFunctionDetails : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) RWIProtocolDebuggerLocation *location;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *scopeChain;


-(id)initWithLocation:(id)arg0 ;


@end


#endif