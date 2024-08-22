// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPMOVIEHIGHLIGHTRESULT_H
#define VCPMOVIEHIGHLIGHTRESULT_H


#import <Foundation/Foundation.h>

#import "VCPVideoKeyFrameResult.h"

@interface VCPMovieHighlightResult : NSObject

@property (readonly, nonatomic) VCPVideoKeyFrameResult *keyFrame; // ivar: _keyFrame
@property (readonly, nonatomic) float score; // ivar: _score
@property (readonly, nonatomic) ? timerange; // ivar: _timerange


-(id)initWithTimeRange:(struct ? )arg0 score:(float)arg1 andKeyFrame:(id)arg2 ;


@end


#endif