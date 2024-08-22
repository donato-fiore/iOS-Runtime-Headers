// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPSTORAGEPASTERULES_H
#define TSWPSTORAGEPASTERULES_H


#import <Foundation/Foundation.h>

#import "TSWPStorage.h"

@interface TSWPStoragePasteRules : NSObject {
    unsigned int _flags;
    unsigned int _actionFlags;
    unsigned int _lastFlag;
    _NSRange _srcLeadRange;
    _NSRange _srcTrailRange;
    BOOL _mapDestTrailCS;
    TSWPStorage *_destStorage;
    NSUInteger _sourceColumnStyleCount;
    NSUInteger _sourceSectionCount;
    ? _paragraphs;
}




-(void)addActionFlag:(int)arg0 ;
-(void)applyParagraph:(int)arg0 toCharIndex:(NSUInteger)arg1 ioTransaction:(*void)arg2 ;
-(void)dealloc;
-(void)didPasteWithIOTransaction:(*void)arg0 atDestRange:(struct _NSRange )arg1 ;
-(void)mapCharacterStyleProperties:(id)arg0 toRange:(struct _NSRange )arg1 ioTransaction:(*void)arg2 ;
-(void)mapCharacterStyles:(int)arg0 toRange:(struct _NSRange )arg1 ioTransaction:(*void)arg2 ;
-(void)setupFlagsForPastingSrcStorage:(id)arg0 intoDestStorage:(id)arg1 atDestRange:(struct _NSRange )arg2 ;
-(void)willPasteStorage:(id)arg0 intoDestStorage:(id)arg1 atDestRange:(struct _NSRange )arg2 ;


@end


#endif