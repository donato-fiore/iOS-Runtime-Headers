// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SOAUTHORIZATIONPOOLITEM_H
#define SOAUTHORIZATIONPOOLITEM_H

@protocol SOAuthorizationCoreDelegate;

#import <Foundation/Foundation.h>

#import "SOAuthorizationCore.h"

@interface SOAuthorizationPoolItem : NSObject

@property (readonly, nonatomic) SOAuthorizationCore *authorization; // ivar: _authorization
@property (readonly, nonatomic) NSObject<SOAuthorizationCoreDelegate> *delegate; // ivar: _delegate


-(id)initWithAuthorization:(id)arg0 delegate:(id)arg1 ;


@end


#endif