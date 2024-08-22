// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPCHARACTERADORNMENTSTATE_H
#define TSWPCHARACTERADORNMENTSTATE_H

@class TSDFill, TSDStroke, NSMutableSet, TSUSparseArray, TSDShadow;

#import <Foundation/Foundation.h>


@interface TSWPCharacterAdornmentState : NSObject

@property (retain, nonatomic) TSDFill *currentAdornmentFill; // ivar: _currentAdornmentFill
@property (retain, nonatomic) TSDStroke *currentAdornmentStroke; // ivar: _currentAdornmentStroke
@property (retain, nonatomic) NSMutableSet *currentDropCapAdornments; // ivar: _currentDropCapAdornments
@property (retain, nonatomic) TSUSparseArray *currentFillPaths; // ivar: _currentFillPaths
@property (nonatomic) _NSRange currentFillRange; // ivar: _currentFillRange
@property (nonatomic) CGRect currentFillRect; // ivar: _currentFillRect
@property (retain, nonatomic) TSDShadow *currentFillShadow; // ivar: _currentFillShadow
@property (retain, nonatomic) TSUSparseArray *currentRubyFillPaths; // ivar: _currentRubyFillPaths
@property (retain, nonatomic) TSUSparseArray *currentRubyStrokePaths; // ivar: _currentRubyStrokePaths
@property (retain, nonatomic) TSUSparseArray *currentStrokePaths; // ivar: _currentStrokePaths
@property (nonatomic) _NSRange currentStrokeRange; // ivar: _currentStrokeRange
@property (nonatomic) CGRect currentStrokeRect; // ivar: _currentStrokeRect
@property (retain, nonatomic) TSDShadow *currentStrokeShadow; // ivar: _currentStrokeShadow
@property (nonatomic) BOOL fillsCurrentTextContainer; // ivar: _fillsCurrentTextContainer
@property (nonatomic) BOOL hasValidFillState; // ivar: _hasValidFillState
@property (nonatomic) BOOL hasValidStrokeState; // ivar: _hasValidStrokeState


+(id)p_deepCopyPathArray:(id)arg0 ;
-(id)init;
-(void)resetFillState;
-(void)resetStrokeState;
-(void)setStateWithFill:(id)arg0 range:(struct _NSRange )arg1 rect:(struct CGRect )arg2 paths:(id)arg3 rubyPaths:(id)arg4 shadow:(id)arg5 fillsCurrentTextContainer:(BOOL)arg6 ;
-(void)setStateWithStroke:(id)arg0 range:(struct _NSRange )arg1 rect:(struct CGRect )arg2 paths:(id)arg3 rubyPaths:(id)arg4 shadow:(id)arg5 ;


@end


#endif