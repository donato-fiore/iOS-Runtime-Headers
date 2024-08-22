// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMLIDPENTRY_H
#define SAMLIDPENTRY_H

@class NSString;


#import "SAMLBaseElement.h"

@interface SAMLIDPEntry : SAMLBaseElement

@property (readonly, nonatomic) NSString *loc;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *providerId;


+(id)createElement:(*id)arg0 ;


@end


#endif