// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3CHAPTERTOC_H
#define ML3CHAPTERTOC_H



#import "MLITChapterTOC.h"
#import "ML3Track.h"

@interface ML3ChapterTOC : MLITChapterTOC {
    ML3Track *_track;
}




-(id)initWithChapterDataRef:(struct ChapterData *)arg0 track:(id)arg1 ;


@end


#endif