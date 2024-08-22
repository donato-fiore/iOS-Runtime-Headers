// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFACTIONREQUEST_H
#define WFACTIONREQUEST_H

@class NSString, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "WFAction.h"

@interface WFActionRequest : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (retain, nonatomic) WFAction *result; // ivar: _result
@property (readonly, nonatomic) NSDictionary *serializedParameters; // ivar: _serializedParameters


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithActionIdentifier:(id)arg0 serializedParameters:(id)arg1 ;


@end


#endif