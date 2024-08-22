// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSEXTRALMDATA_H
#define NSEXTRALMDATA_H

@class NSLock, NSMutableArray, CUIStyleEffectConfiguration, NSMutableSet;

#import <Foundation/Foundation.h>

#import "NSRunStorage.h"
#import "NSTextContainer.h"
#import "NSLayoutManagerTextBlockRowArrayCache.h"
#import "NSParagraphArbitrator.h"

@interface NSExtraLMData : NSObject {
    NSRunStorage *_attachmentSizesRun;
    CGRect _currentAttachmentRect;
    NSUInteger _currentAttachmentIndex;
    NSLock *_fillHoleLock;
    NSRunStorage *_fragmentRunsExtras;
    id *_temporaryAttributes;
    NSTextContainer *_firstTextContainer;
    *__CFDictionary _textContainerIndexes;
    *__CFDictionary _textContainerGlyphIndexes;
    NSInteger _typesetterBehavior;
    CGRect _cachedFontBounds;
    CGFloat _cachedUnderlineThickness;
    CGFloat _cachedUnderlinePosition;
    CGFloat _cachedUnderlineAdjustment;
    _NSRange _cachedUnderlineRange;
    NSMutableArray *_blockRunsArray;
    CGFloat _hyphenationFactor;
    NSMutableArray *_insertionPointCache;
    _NSGlyphTree _glyphTree;
    _NSLayoutTree _layoutTree;
    _NSRange _firstTextViewVisibleCharRange;
    CGSize _firstTextViewVisibleOffset;
    _NSRange _lastInvalidatedCharRange;
    CGFloat _lastInvalidatedLongitudinalPosition;
    NSTextContainer *_lastInvalidatedTextContainer;
    NSLayoutManagerTextBlockRowArrayCache *_rowArrayCache;
    NSParagraphArbitrator *_paragraphArbitrator;
    CUIStyleEffectConfiguration *_styleEffectConfig;
    NSMutableSet *_viewProviders;
    __lmFlags2 _lmFlags2;
    _NSGlyphIndexForPointCache _glyphIndexForPointCache;
    NSInteger _currentChangeInLength;
    CGFloat _timeStampForResizeInScroll;
    id *_didCompleteLayoutObserverBlock;
}






@end


#endif