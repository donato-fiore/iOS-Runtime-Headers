// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVLYRICSSONGINFO_H
#define MSVLYRICSSONGINFO_H

@class NSArray, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface MSVLyricsSongInfo : NSObject

@property (retain, nonatomic) NSArray *agents; // ivar: _agents
@property (readonly, nonatomic) NSArray *availableTranslations;
@property (copy, nonatomic) NSString *language; // ivar: _language
@property (nonatomic) CGFloat leadingSilence; // ivar: _leadingSilence
@property (copy, nonatomic) NSString *lyricGenId; // ivar: _lyricGenId
@property (retain, nonatomic) NSArray *lyricsLines; // ivar: _lyricsLines
@property (retain, nonatomic) NSArray *lyricsSections; // ivar: _lyricsSections
@property (nonatomic) CGFloat songDuration; // ivar: _songDuration
@property (retain, nonatomic) NSArray *songwriters; // ivar: _songwriters
@property (retain, nonatomic) NSDictionary *translationsMap; // ivar: _translationsMap
@property (nonatomic) NSInteger type; // ivar: _type


+(id)_descriptionForLyricsInfoType:(NSInteger)arg0 ;
+(id)_elementsInArray:(id)arg0 atTimeOffset:(CGFloat)arg1 errorMargin:(CGFloat)arg2 ;
-(id)_sortLyricsLinesByStartTime:(id)arg0 ;
-(id)description;
-(id)init;
-(id)lyricsLineStartingBeforeTimeOffset:(CGFloat)arg0 ;
-(id)lyricsLinesAtTimeOffset:(CGFloat)arg0 errorMargin:(CGFloat)arg1 ;
-(id)lyricsWordsAtTimeOffset:(CGFloat)arg0 errorMargin:(CGFloat)arg1 ;
-(id)translatedTextForLyricsLine:(id)arg0 language:(id)arg1 ;


@end


#endif