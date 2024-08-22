// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCREPORTINGLYRICSVIEWEVENT_H
#define MPCREPORTINGLYRICSVIEWEVENT_H

@class NSString, MPModelPlayEvent, MPModelSong, NSData;

#import <Foundation/Foundation.h>


@interface MPCReportingLyricsViewEvent : NSObject

@property (nonatomic) NSInteger displayType; // ivar: _displayType
@property (nonatomic) NSInteger displayedCharacterCount; // ivar: _displayedCharacterCount
@property (copy, nonatomic) NSString *featureName; // ivar: _featureName
@property (copy, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSString *lyricsID; // ivar: _lyricsID
@property (retain, nonatomic) MPModelPlayEvent *modelPlayEvent; // ivar: _modelPlayEvent
@property (retain, nonatomic) MPModelSong *modelSong; // ivar: _modelSong
@property (copy, nonatomic) NSString *queueGroupingID; // ivar: _queueGroupingID
@property (copy, nonatomic) NSData *recommendationData; // ivar: _recommendationData
@property (nonatomic) NSInteger sourceType; // ivar: _sourceType
@property (nonatomic) CGFloat visibleDuration; // ivar: _visibleDuration




@end


#endif