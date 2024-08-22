// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLITCHAPTERTOC_H
#define MLITCHAPTERTOC_H



#import "MLChapterTOC.h"

@interface MLITChapterTOC : MLChapterTOC {
    unsigned int _totalTimeInMS;
    *ChapterData _chapterDataRef;
    *unsigned int _picCookieIndexMap;
    *unsigned int _urlCookieIndexMap;
    *unsigned int _nameCookieIndexMap;
}




+(**unsigned int)_chapterDataCookieIndexMapForProperty:(int)arg0 ofChapterTOC:(id)arg1 ;
+(void)enumerateArtworkCacheIDsInFlattenedChapterData:(id)arg0 usingBlock:(id)arg1 ;
+(void)enumerateChapterTimesInFlattenedChapterData:(id)arg0 usingBlock:(id)arg1 ;
-(*unsigned int)_cachedCookieIndexMapForProperty:(int)arg0 createIfNecessary:(BOOL)arg1 ;
-(id)initWithChapterDataRef:(struct ChapterData *)arg0 totalTimeInMS:(unsigned int)arg1 ;
-(id)titlePropertyOfChapterAtIndex:(unsigned int)arg0 ;
-(id)urlPropertyOfChapterAtIndex:(unsigned int)arg0 ;
-(id)urlTitlePropertyOfChapterAtIndex:(unsigned int)arg0 ;
-(id)urlTitleTrimmingCharacterSet;
-(struct ChapterData *)chapterDataRef;
-(unsigned int)chapterIndexForGroupIndex:(unsigned int)arg0 groupingProperty:(int)arg1 ;
-(unsigned int)countOfChapters;
-(unsigned int)countOfGroupsForProperty:(int)arg0 ;
-(unsigned int)durationInMSOfGroupAtIndex:(unsigned int)arg0 groupingProperty:(int)arg1 ;
-(unsigned int)groupIndexAtTimeLocationInMS:(unsigned int)arg0 groupingProperty:(int)arg1 ;
-(unsigned int)groupIndexForChapterIndex:(unsigned int)arg0 groupingProperty:(int)arg1 ;
-(unsigned int)timeLocationInMSOfChapterAtIndex:(unsigned int)arg0 ;
-(unsigned int)timeLocationInMSOfGroupAtIndex:(unsigned int)arg0 groupingProperty:(int)arg1 ;
-(unsigned int)totalTimeInMS;
-(void)dealloc;


@end


#endif