// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMLDSAKEYVALUE_H
#define SAMLDSAKEYVALUE_H

@class NSData;


#import "SAMLBaseElement.h"

@interface SAMLDSAKeyValue : SAMLBaseElement

@property (readonly, nonatomic) NSData *g;
@property (readonly, nonatomic) NSData *j;
@property (readonly, nonatomic) NSData *p;
@property (readonly, nonatomic) NSData *pgenCounter;
@property (readonly, nonatomic) NSData *q;
@property (readonly, nonatomic) NSData *seed;
@property (readonly, nonatomic) NSData *y;


+(id)createElement:(*id)arg0 ;


@end


#endif