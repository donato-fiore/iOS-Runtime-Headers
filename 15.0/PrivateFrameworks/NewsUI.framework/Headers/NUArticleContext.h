// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUARTICLECONTEXT_H
#define NUARTICLECONTEXT_H

@class SXScrollPosition;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NUArticleContext : NSObject <NSCopying>



@property (readonly, nonatomic) SXScrollPosition *scrollPosition; // ivar: _scrollPosition
@property (readonly, nonatomic) BOOL shouldAutoPlayVideo; // ivar: _shouldAutoPlayVideo


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithShouldAutoPlayVideo:(BOOL)arg0 scrollPosition:(id)arg1 ;


@end


#endif