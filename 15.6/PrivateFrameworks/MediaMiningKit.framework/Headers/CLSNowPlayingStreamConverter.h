// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSNOWPLAYINGSTREAMCONVERTER_H
#define CLSNOWPLAYINGSTREAMCONVERTER_H


#import <Foundation/Foundation.h>


@interface CLSNowPlayingStreamConverter : NSObject

@property (nonatomic) NSUInteger options; // ivar: _options


+(NSUInteger)defaultOptions;
+(id)recognizedMusicSources;
-(BOOL)_canUseEvent:(id)arg0 ;
-(id)eventFromDuetKnoweledgeEvent:(id)arg0 ;
-(id)eventsFromDuetKnowledgeEvents:(id)arg0 ;
-(id)init;


@end


#endif