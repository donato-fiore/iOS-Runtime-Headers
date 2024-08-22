// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCREPORTINGCONTROLLER_H
#define _MPCREPORTINGCONTROLLER_H


#import <Foundation/Foundation.h>

#import "MPCLyricsReportingController.h"
#import "MPCPlaybackEngine.h"

@interface _MPCReportingController : NSObject

@property (retain, nonatomic) MPCLyricsReportingController *lyricsReportingController; // ivar: _lyricsReportingController
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine


-(id)initWithPlaybackEngine:(id)arg0 ;
-(void)recordLyricsViewEvent:(id)arg0 ;


@end


#endif