// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLPUSHPULLGATEKEEPER_H
#define CPLPUSHPULLGATEKEEPER_H


#import <Foundation/Foundation.h>

#import "CPLEngineStore.h"

@interface CPLPushPullGatekeeper : NSObject

@property (readonly, weak, nonatomic) CPLEngineStore *store; // ivar: _store


-(NSInteger)checkPushedChange:(id)arg0 ;
-(id)initWithStore:(id)arg0 ;


@end


#endif