// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPTTEXTBLOCK_H
#define PPTTEXTBLOCK_H

@class NSMutableString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface PptTextBlock : NSObject {
    *PptTextHeaderAtom mTextHeader;
    NSMutableString *mText;
    *void mStyleText;
    *void mSpecialInfo;
    NSMutableArray *mMetaCharacterFields;
    NSMutableArray *mBookmarks;
    NSMutableArray *mHyperlinks;
    *void mTextRuler;
}




-(*void)paragraphRunAtIndex:(int)arg0 ;
-(*void)specialInfoRunAtIndex:(int)arg0 ;
-(*void)textRuler;
-(id)bookmarks;
-(id)hyperlinks;
-(id)init;
-(id)metaCharacterFields;
-(id)text;
-(int)characterRunCount;
-(int)paragraphRunCount;
-(int)specialInfoRunCount;
-(int)textType;
-(struct PptCharRun *)characterRunAtIndex:(int)arg0 ;
-(unsigned int)textIndex;
-(void)readMetaCharacterFieldsBookmarksAndHyperlinks:(id)arg0 ;
-(void)readSpecialInfo:(id)arg0 ;
-(void)readString:(id)arg0 ;
-(void)readStyles:(id)arg0 ;
-(void)readTextBlock:(id)arg0 ;
-(void)writeTextBlock:(id)arg0 ;


@end


#endif