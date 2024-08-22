// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSATSTYPESETTERGUTS_H
#define _NSATSTYPESETTERGUTS_H


#import <Foundation/Foundation.h>

#import "NSATSLineFragment.h"
#import "NSATSGlyphStorage.h"

@interface _NSATSTypesetterGuts : NSObject {
    NSATSLineFragment *_lineFragment;
    NSATSGlyphStorage *_glyphStorage;
    NSUInteger _lastGlyphIndex;
    NSUInteger _lastContainerIndex;
    *? _typesetterAuxiliary;
    *unk _lineFragmentRectArgs;
    char * _bidiLevels;
    CGFloat _defaultTighteningFactor;
    NSUInteger _lineBreakStrategy;
    BOOL _isBusy;
    ? _flags;
    ? _paragraphState;
    *__CTTypesetter _ctTypesetter;
}




-(void)dealloc;
-(void)finalize;


@end


#endif