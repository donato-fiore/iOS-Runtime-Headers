// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMLX509DATA_H
#define SAMLX509DATA_H

@class NSData, NSString, NSNumber;


#import "SAMLBaseElement.h"

@interface SAMLX509Data : SAMLBaseElement

@property (readonly, nonatomic) NSData *certificate;
@property (readonly, nonatomic) NSData *crl;
@property (readonly, nonatomic) NSString *issuerName;
@property (readonly, nonatomic) NSNumber *serialNumber;
@property (readonly, nonatomic) NSData *ski;
@property (readonly, nonatomic) NSString *subjectName;


+(id)createElement:(*id)arg0 ;


@end


#endif