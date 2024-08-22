// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMLSIGNATUREREFERENCE_H
#define SAMLSIGNATUREREFERENCE_H

@class NSString, NSData, NSArray;


#import "SAMLBaseElement.h"

@interface SAMLSignatureReference : SAMLBaseElement

@property (readonly, nonatomic) NSString *digestMethod;
@property (readonly, nonatomic) NSData *digestValue;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *transforms;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *uri;


+(id)createElement:(*id)arg0 ;


@end


#endif