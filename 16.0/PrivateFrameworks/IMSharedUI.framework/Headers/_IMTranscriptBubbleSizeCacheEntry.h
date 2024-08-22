// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _IMTRANSCRIPTBUBBLESIZECACHEENTRY_H
#define _IMTRANSCRIPTBUBBLESIZECACHEENTRY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _IMTranscriptBubbleSizeCacheEntry : NSObject <NSCopying>



@property (nonatomic) CGFloat maximumWidth; // ivar: _maximumWidth
@property (readonly, nonatomic) CGFloat minimumWidth;
@property (nonatomic) CGSize size; // ivar: _size


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSize:(struct CGSize )arg0 maximumWidth:(CGFloat)arg1 ;


@end


#endif