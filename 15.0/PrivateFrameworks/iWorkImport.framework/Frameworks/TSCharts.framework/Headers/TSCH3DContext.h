// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DCONTEXT_H
#define TSCH3DCONTEXT_H

@class NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCH3DContext : NSObject <NSCopying>

 {
    FramebufferAttributes _currentFramebufferAttributes;
}


@property (readonly, nonatomic) NSSet *childrenContexts;


-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)sharedContext;
-(struct FramebufferAttributes *)currentFramebufferAttributes;
-(void)setCurrentFramebufferAttributes:(struct FramebufferAttributes *)arg0 ;


@end


#endif