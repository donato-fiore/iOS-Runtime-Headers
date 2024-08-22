// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMLNAMEIDPOLICY_H
#define SAMLNAMEIDPOLICY_H

@class NSString;


#import "SAMLBaseElement.h"

@interface SAMLNameIdPolicy : SAMLBaseElement

@property (readonly, nonatomic) NSString *allowCreation;
@property (readonly, nonatomic) NSString *format;


+(id)createElement:(*id)arg0 ;


@end


#endif