// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHFLIPBOOKCONTEXT_H
#define BLSHFLIPBOOKCONTEXT_H

@class CAContext;

#import <Foundation/Foundation.h>


@interface BLSHFlipbookContext : NSObject

@property (readonly, nonatomic) CAContext *caContext; // ivar: _caContext
@property (readonly, nonatomic, getter=isInverted) BOOL inverted; // ivar: _inverted
@property (readonly, nonatomic) BOOL wantsTransform; // ivar: _wantsTransform


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCAContext:(id)arg0 wantsTransform:(BOOL)arg1 inverted:(BOOL)arg2 ;


@end


#endif