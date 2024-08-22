// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMLNAMEID_H
#define SAMLNAMEID_H

@class NSString;


#import "SAMLBaseElement.h"

@interface SAMLNameId : SAMLBaseElement

@property (readonly, nonatomic) NSString *format;
@property (readonly, nonatomic) NSString *nameQualifier;
@property (readonly, nonatomic) NSString *spNameQualifier;
@property (readonly, nonatomic) NSString *spProvidedId;


+(id)createElement:(*id)arg0 ;


@end


#endif