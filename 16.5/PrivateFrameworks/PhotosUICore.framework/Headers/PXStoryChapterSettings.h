// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCHAPTERSETTINGS_H
#define PXSTORYCHAPTERSETTINGS_H



#import "PXSettings.h"

@interface PXStoryChapterSettings : PXSettings

@property (nonatomic) NSInteger chapterCollectionProducerKind; // ivar: _chapterCollectionProducerKind
@property (nonatomic) NSInteger dummyChaptersCountInterval; // ivar: _dummyChaptersCountInterval
@property (nonatomic) NSInteger dummyChaptersDayInterval; // ivar: _dummyChaptersDayInterval
@property (nonatomic) BOOL dummyChaptersIncludeSubtitles; // ivar: _dummyChaptersIncludeSubtitles


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif