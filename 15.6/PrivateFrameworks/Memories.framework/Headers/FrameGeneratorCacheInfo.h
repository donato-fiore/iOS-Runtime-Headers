// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FRAMEGENERATORCACHEINFO_H
#define FRAMEGENERATORCACHEINFO_H


#import <Foundation/Foundation.h>

#import "VideoMovie.h"

@interface FrameGeneratorCacheInfo : NSObject

@property (retain, nonatomic) VideoMovie *movie; // ivar: m_movie
@property (nonatomic) CGFloat rotation; // ivar: m_rotation
@property (nonatomic) CGSize size; // ivar: m_size
@property (nonatomic) ? time; // ivar: m_time


-(void)dealloc;


@end


#endif