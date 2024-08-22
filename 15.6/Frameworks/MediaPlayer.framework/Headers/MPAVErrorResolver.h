// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPAVERRORRESOLVER_H
#define MPAVERRORRESOLVER_H

@protocol MPAVErrorResolverDelegate;

#import <Foundation/Foundation.h>


@interface MPAVErrorResolver : NSObject

@property (weak, nonatomic) NSObject<MPAVErrorResolverDelegate> *delegate; // ivar: _delegate


-(void)resolveError:(id)arg0 ;
-(void)sendDidResolveError:(id)arg0 withResolution:(NSInteger)arg1 ;


@end


#endif