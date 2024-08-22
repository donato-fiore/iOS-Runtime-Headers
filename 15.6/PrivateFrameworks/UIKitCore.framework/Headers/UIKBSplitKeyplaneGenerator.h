// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBSPLITKEYPLANEGENERATOR_H
#define UIKBSPLITKEYPLANEGENERATOR_H

@class NSMutableArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "UIKBTree.h"
#import "UIKeyboardSliceSet.h"
#import "UIKeyboardTransitionSlice.h"

@interface UIKBSplitKeyplaneGenerator : NSObject {
    NSMutableArray *_rows;
    NSDictionary *_splitLayoutHints;
    UIKBTree *_sourceKeyboard;
    UIKBTree *_sourceKeyplane;
    CGSize _splitKeySizeFactor;
    CGSize _keyboardSize;
    CGFloat _leftSideWidestRow;
    CGFloat _rightSideWidestRow;
    NSInteger _keyboardType;
    UIKeyboardSliceSet *_sliceSet;
    UIKeyboardTransitionSlice *_leftSlice;
    UIKeyboardTransitionSlice *_rightSlice;
}




-(id)finalizeSplitKeyplane;
-(id)generateRivenKeyplaneFromKeyplane:(id)arg0 forKeyboard:(id)arg1 ;
-(id)hintsForRow:(id)arg0 ;
-(id)init;
-(id)keysOrderedByPosition;
-(void)addKey:(id)arg0 withShape:(id)arg1 forRow:(id)arg2 attribs:(id)arg3 left:(BOOL)arg4 force:(BOOL)arg5 isDefaultWidth:(BOOL)arg6 ;
-(void)addSliceStart:(struct CGRect )arg0 end:(struct CGRect )arg1 startToken:(id)arg2 endToken:(id)arg3 left:(BOOL)arg4 normalization:(int)arg5 isDefaultWidth:(BOOL)arg6 row:(int)arg7 ;
-(void)alignSpaceKeyEdges;
-(void)commitUncommittedSlices;
-(void)dealloc;
-(void)initializeGeneratorForKeyplane:(id)arg0 name:(id)arg1 ;
-(void)organizeKeyplaneIntoRows;
-(void)splitRow:(id)arg0 ;
-(void)splitSpaceKey:(id)arg0 leftSpace:(id)arg1 left:(struct CGRect )arg2 right:(struct CGRect )arg3 ;


@end


#endif