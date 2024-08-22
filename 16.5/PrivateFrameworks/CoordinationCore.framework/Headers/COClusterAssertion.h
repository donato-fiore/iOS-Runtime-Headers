// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COCLUSTERASSERTION_H
#define COCLUSTERASSERTION_H

@class COCluster;
@protocol COClusterAssertionDelegate;

#import <Foundation/Foundation.h>


@interface COClusterAssertion : NSObject

@property (readonly, nonatomic) COCluster *cluster; // ivar: _cluster
@property (readonly, weak, nonatomic) NSObject<COClusterAssertionDelegate> *delegate; // ivar: _delegate


+(id)assertionForCluster:(id)arg0 delegate:(id)arg1 ;
-(id)_initWithCluster:(id)arg0 delegate:(id)arg1 ;
-(void)_notifyInvalidated;
-(void)dealloc;


@end


#endif