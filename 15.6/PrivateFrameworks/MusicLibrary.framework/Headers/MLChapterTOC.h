// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCHAPTERTOC_H
#define MLCHAPTERTOC_H


#import <Foundation/Foundation.h>


@interface MLChapterTOC : NSObject



-(BOOL)hasDataForProperty:(int)arg0 ;
-(id)titlePropertyOfChapterAtIndex:(unsigned int)arg0 ;
-(id)urlPropertyOfChapterAtIndex:(unsigned int)arg0 ;
-(id)urlTitlePropertyOfChapterAtIndex:(unsigned int)arg0 ;
-(struct ChapterData *)chapterDataRef;
-(unsigned int)chapterIndexAtTimeLocationInMS:(unsigned int)arg0 ;
-(unsigned int)chapterIndexForGroupIndex:(unsigned int)arg0 groupingProperty:(int)arg1 ;
-(unsigned int)countOfChapters;
-(unsigned int)countOfGroupsForProperty:(int)arg0 ;
-(unsigned int)durationInMSOfGroupAtIndex:(unsigned int)arg0 groupingProperty:(int)arg1 ;
-(unsigned int)groupIndexAtTimeLocationInMS:(unsigned int)arg0 groupingProperty:(int)arg1 ;
-(unsigned int)groupIndexForChapterIndex:(unsigned int)arg0 groupingProperty:(int)arg1 ;
-(unsigned int)timeLocationInMSOfChapterAtIndex:(unsigned int)arg0 ;
-(unsigned int)timeLocationInMSOfGroupAtIndex:(unsigned int)arg0 groupingProperty:(int)arg1 ;


@end


#endif