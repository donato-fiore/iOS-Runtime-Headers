// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMLSTATUS_H
#define SAMLSTATUS_H

@class NSString;


#import "SAMLBaseElement.h"
#import "SAMLStatusCode.h"

@interface SAMLStatus : SAMLBaseElement

@property (readonly, nonatomic) SAMLStatusCode *statusCode;
@property (readonly, nonatomic) NSString *statusDetail;
@property (readonly, nonatomic) NSString *statusMessage;


+(id)createElement:(*id)arg0 ;
-(id)status;


@end


#endif