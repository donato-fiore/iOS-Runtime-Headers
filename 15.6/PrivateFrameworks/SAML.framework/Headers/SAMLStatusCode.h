// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMLSTATUSCODE_H
#define SAMLSTATUSCODE_H

@class NSString;


#import "SAMLBaseElement.h"
#import "SAMLStatusCode.h"

@interface SAMLStatusCode : SAMLBaseElement

@property (readonly, nonatomic) SAMLStatusCode *statusCode;
@property (readonly, nonatomic) NSString *value;


+(id)createElement:(*id)arg0 ;


@end


#endif