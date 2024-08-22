// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMLREQUESTEDAUTHNCONTEXT_H
#define SAMLREQUESTEDAUTHNCONTEXT_H

@class NSString;


#import "SAMLBaseElement.h"

@interface SAMLRequestedAuthNContext : SAMLBaseElement

@property (readonly, nonatomic) NSString *classRef;
@property (readonly, nonatomic) NSString *comparison;
@property (readonly, nonatomic) NSString *declRef;


+(id)createElement:(*id)arg0 ;


@end


#endif