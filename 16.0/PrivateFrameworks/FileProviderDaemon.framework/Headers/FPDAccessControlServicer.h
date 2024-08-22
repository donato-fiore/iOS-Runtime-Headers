// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPDACCESSCONTROLSERVICER_H
#define FPDACCESSCONTROLSERVICER_H

@protocol FPDAccessControlServicing;

#import <Foundation/Foundation.h>

#import "FPDAccessControlStore.h"

@interface FPDAccessControlServicer : NSObject <FPDAccessControlServicing>



@property (weak, nonatomic) FPDAccessControlStore *accessStore; // ivar: _accessStore


-(id)initWithAccessStore:(id)arg0 ;
-(void)bundleIdentifiersWithAccessToAnyItemCompletionHandler:(id)arg0 ;
-(void)revokeAccessToAllItemsForBundle:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif