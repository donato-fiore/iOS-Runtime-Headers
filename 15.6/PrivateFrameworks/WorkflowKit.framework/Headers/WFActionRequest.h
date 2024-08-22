// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFACTIONREQUEST_H
#define WFACTIONREQUEST_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "WFAction.h"

@interface WFActionRequest : NSObject

@property (readonly, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (retain, nonatomic) WFAction *result; // ivar: _result
@property (readonly, nonatomic) NSDictionary *serializedParameters; // ivar: _serializedParameters


-(id)description;
-(id)initWithActionIdentifier:(id)arg0 serializedParameters:(id)arg1 ;


@end


#endif