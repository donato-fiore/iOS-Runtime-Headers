// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMLKEYRETRIEVALMETHOD_H
#define SAMLKEYRETRIEVALMETHOD_H

@class NSArray, NSString;


#import "SAMLBaseElement.h"

@interface SAMLKeyRetrievalMethod : SAMLBaseElement

@property (readonly, nonatomic) NSArray *transforms;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *uri;


+(id)createElement:(*id)arg0 ;


@end


#endif