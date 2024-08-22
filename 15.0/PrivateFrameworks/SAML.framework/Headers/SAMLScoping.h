// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMLSCOPING_H
#define SAMLSCOPING_H

@class NSString, NSArray, NSNumber;


#import "SAMLBaseElement.h"

@interface SAMLScoping : SAMLBaseElement

@property (readonly, nonatomic) NSString *getComplete;
@property (readonly, nonatomic) NSArray *idpList;
@property (readonly, nonatomic) NSNumber *proxyCount;
@property (readonly, nonatomic) NSArray *requesterIds;


+(id)createElement:(*id)arg0 ;
-(void)addRequesterId:(id)arg0 ;


@end


#endif