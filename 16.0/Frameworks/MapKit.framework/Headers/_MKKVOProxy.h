// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKKVOPROXY_H
#define _MKKVOPROXY_H

@protocol _MKKVOProxyDelegate;

#import <Foundation/Foundation.h>


@interface _MKKVOProxy : NSObject

@property (weak, nonatomic) NSObject<_MKKVOProxyDelegate> *delegate; // ivar: _delegate


-(id)initWithDelegate:(id)arg0 ;
-(void)addObserverForObject:(id)arg0 forKeyPath:(id)arg1 options:(NSUInteger)arg2 context:(*void)arg3 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeObserverForObject:(id)arg0 forKeyPath:(id)arg1 ;
-(void)removeObserverForObject:(id)arg0 forKeyPath:(id)arg1 context:(*void)arg2 ;


@end


#endif