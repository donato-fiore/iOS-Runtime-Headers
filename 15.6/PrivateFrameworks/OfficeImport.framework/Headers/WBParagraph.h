// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBPARAGRAPH_H
#define WBPARAGRAPH_H


#import <Foundation/Foundation.h>


@interface WBParagraph : NSObject



+(?)readFrom:(?)arg0 textRunparagraph;
+(?)readOfficeArtFor:(?)arg0 from:(?)arg1 attextRun;
+(?)readPictureFor:(?)arg0 from:(?)arg1 attextRun;
+(?)readSpecialCharacterFor:(?)arg0 from:(?)arg1 attextRun;
+(?)readSpecialCharactersFor:(?)arg0 fromtextRun;
+(?)readSymbolsFor:(?)arg0 fromtextRun;
+(BOOL)isCPAnnotationRangeEnd:(int)arg0 bookmarkTable:(*void)arg1 ;
+(int)blockType;
+(void)check:(id)arg0 forFieldMarkerFrom:(id)arg1 runEnd:(*int)arg2 readState:(*void)arg3 ;
+(void)checkForAnnotationBookmarkFrom:(id)arg0 runEnd:(*int)arg1 readState:(*void)arg2 ;
+(void)checkForAnnotationFrom:(id)arg0 runEnd:(*int)arg1 readState:(*void)arg2 ;
+(void)checkForBookmarkFrom:(id)arg0 runEnd:(*int)arg1 readState:(*void)arg2 ;
+(void)checkForNoteFrom:(id)arg0 footnote:(BOOL)arg1 runEnd:(*int)arg2 readState:(*void)arg3 ;
+(void)readAnnotationBookmarkFor:(id)arg0 from:(id)arg1 readState:(*void)arg2 ;
+(void)readAnnotationFor:(id)arg0 from:(id)arg1 readState:(*void)arg2 ;
+(void)readBookmarkFor:(id)arg0 from:(id)arg1 readState:(*void)arg2 ;
+(void)readCharacterRunsFor:(id)arg0 from:(id)arg1 readState:(*void)arg2 ;
+(void)readFieldMarkerFor:(id)arg0 from:(id)arg1 readState:(*void)arg2 ;
+(void)readNoteFor:(id)arg0 from:(id)arg1 readState:(*void)arg2 ;
+(void)readRunsFor:(id)arg0 from:(id)arg1 textRun:(struct WrdParagraphTextRun *)arg2 ;


@end


#endif