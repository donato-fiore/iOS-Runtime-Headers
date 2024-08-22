// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWIRISMOVIEINFOANDCALLBACK_H
#define BWIRISMOVIEINFOANDCALLBACK_H


#import <Foundation/Foundation.h>

#import "BWIrisMovieInfo.h"

@interface BWIrisMovieInfoAndCallback : NSObject

@property (readonly, nonatomic) id *callback; // ivar: _callback
@property (readonly, nonatomic) BWIrisMovieInfo *info; // ivar: _info
@property (nonatomic) CGFloat overCaptureQualityScore; // ivar: _overCaptureQualityScore
@property (nonatomic) unsigned int overCaptureQualityScoringVersion; // ivar: _overCaptureQualityScoringVersion
@property (nonatomic) BOOL processed; // ivar: _processed


+(id)movieInfoAndCallbackWithMovieInfo:(id)arg0 callback:(id)arg1 ;
-(id)_initWithMovieInfo:(id)arg0 callback:(id)arg1 ;
-(void)dealloc;


@end


#endif