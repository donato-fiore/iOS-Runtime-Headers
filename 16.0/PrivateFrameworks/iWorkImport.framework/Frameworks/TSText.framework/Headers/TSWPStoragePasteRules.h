// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPSTORAGEPASTERULES_H
#define TSWPSTORAGEPASTERULES_H


#import <Foundation/Foundation.h>

#import "TSWPStorage.h"

@interface TSWPStoragePasteRules : NSObject {
    unsigned int _actionFlags;
    ? _paragraphs;
}


@property (retain, nonatomic) TSWPStorage *destStorage; // ivar: _destStorage
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (nonatomic) unsigned int lastFlag; // ivar: _lastFlag
@property (nonatomic) BOOL mapDestTrailCS; // ivar: _mapDestTrailCS
@property (nonatomic) NSUInteger sourceColumnStyleCount; // ivar: _sourceColumnStyleCount
@property (nonatomic) NSUInteger sourceSectionCount; // ivar: _sourceSectionCount
@property (nonatomic) _NSRange srcLeadRange; // ivar: _srcLeadRange
@property (nonatomic) _NSRange srcTrailRange; // ivar: _srcTrailRange


-(void)addActionFlag:(int)arg0 ;
-(void)applyParagraph:(int)arg0 toCharIndex:(NSUInteger)arg1 ioTransaction:(*void)arg2 ;
-(void)dealloc;
-(void)didPasteWithIOTransaction:(*void)arg0 atDestRange:(struct _NSRange )arg1 ;
-(void)mapCharacterStyleProperties:(id)arg0 toRange:(struct _NSRange )arg1 ioTransaction:(*void)arg2 ;
-(void)mapCharacterStyles:(int)arg0 toRange:(struct _NSRange )arg1 useParagraphProperties:(BOOL)arg2 ioTransaction:(*void)arg3 ;
-(void)setupFlagsForPastingSrcStorage:(id)arg0 intoDestStorage:(id)arg1 atDestRange:(struct _NSRange )arg2 srcStylesAmbiguous:(BOOL)arg3 ;
-(void)willPasteStorage:(id)arg0 intoDestStorage:(id)arg1 atDestRange:(struct _NSRange )arg2 srcStylesAmbiguous:(BOOL)arg3 ;


@end


#endif