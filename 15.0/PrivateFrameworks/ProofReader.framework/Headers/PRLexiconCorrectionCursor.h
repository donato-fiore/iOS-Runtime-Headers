// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRLEXICONCORRECTIONCURSOR_H
#define PRLEXICONCORRECTIONCURSOR_H


#import <Foundation/Foundation.h>


@interface PRLexiconCorrectionCursor : NSObject

@property (readonly) NSUInteger advancementLength; // ivar: _advancementLength
@property (readonly) *_LXCursor cursor; // ivar: _cursor
@property (readonly) NSUInteger deletionsCount; // ivar: _deletionsCount
@property (readonly) NSUInteger errorType;
@property (readonly) NSUInteger insertionsCount; // ivar: _insertionsCount
@property (readonly) CGFloat prefixProbability;
@property (readonly) NSUInteger replacementsCount; // ivar: _replacementsCount
@property (readonly) NSUInteger totalEdits;
@property (readonly) NSUInteger transpositionsCount; // ivar: _transpositionsCount


-(id)description;
-(id)initWithCursor:(struct _LXCursor *)arg0 replacementsCount:(NSUInteger)arg1 insertionsCount:(NSUInteger)arg2 deletionsCount:(NSUInteger)arg3 transpositionsCount:(NSUInteger)arg4 advancementLength:(NSUInteger)arg5 ;
-(void)dealloc;


@end


#endif