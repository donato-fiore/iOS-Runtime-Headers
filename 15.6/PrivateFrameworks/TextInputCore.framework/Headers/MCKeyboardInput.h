// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCKEYBOARDINPUT_H
#define MCKEYBOARDINPUT_H

@class NSArray, NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MCKeyboardInput.h"
#import "MCKeyboardState.h"

@interface MCKeyboardInput : NSObject <NSCopying>



@property (retain, nonatomic) MCKeyboardInput *composingInput;
@property (nonatomic) NSUInteger composingInputIndex; // ivar: _composingInputIndex
@property (readonly, nonatomic) NSArray *inputs;
@property (readonly, nonatomic) NSMutableArray *mutableInputs; // ivar: _mutableInputs
@property (readonly, nonatomic) MCKeyboardState *sourceKeyboardState; // ivar: _sourceKeyboardState


-(BOOL)canComposeNew:(id)arg0 ;
-(BOOL)hasDrawInput;
-(BOOL)hasKindOf:(Class)arg0 ;
-(BOOL)hasRemainingComposingInput;
-(NSUInteger)asInlineTextCursorIndex;
-(id)_asInputStringWithCursorIndex:(*NSUInteger)arg0 remainingComposingInputIndex:(*NSUInteger)arg1 typeInputs:(id)arg2 forSearch:(BOOL)arg3 suffix:(id)arg4 ;
-(id)asCommittedText;
-(id)asInlineText;
-(id)asMecabraGestures:(*BOOL)arg0 ;
-(id)asSearchString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSourceKeyboardState:(id)arg0 ;
-(void)_addNearbyKeys:(id)arg0 to:(*void)arg1 likelihoodThreshold:(float)arg2 ;
-(void)composeNew:(id)arg0 ;
-(void)insertInput:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeAllInputs;
-(void)removeComposingInput;
-(void)removeInputAtIndex:(NSUInteger)arg0 ;
-(void)replaceComposingInputWith:(id)arg0 ;
-(void)replaceInputAtIndex:(NSUInteger)arg0 with:(id)arg1 ;


@end


#endif