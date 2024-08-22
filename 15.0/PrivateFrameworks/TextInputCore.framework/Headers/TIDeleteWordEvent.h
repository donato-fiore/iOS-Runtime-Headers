// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIDELETEWORDEVENT_H
#define TIDELETEWORDEVENT_H

@class NSArray, NSMutableArray;


#import "TIUserAction.h"

@interface TIDeleteWordEvent : TIUserAction

@property (readonly, nonatomic) NSArray *allKeyboardInputs;
@property (retain, nonatomic) NSMutableArray *allKeyboardInputsM; // ivar: _allKeyboardInputsM
@property (readonly, nonatomic) NSArray *allTouches;
@property (retain, nonatomic) NSMutableArray *allTouchesM; // ivar: _allTouchesM
@property (readonly, nonatomic) NSArray *candidatesOffered;
@property (retain, nonatomic) NSMutableArray *candidatesOfferedM; // ivar: _candidatesOfferedM
@property (readonly, nonatomic) NSArray *touchLayouts;
@property (retain, nonatomic) NSMutableArray *touchLayoutsM; // ivar: _touchLayoutsM


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTIKeyboardState:(id)arg0 ;
-(void)addCandidatesOffered:(id)arg0 ;
-(void)addKeyInput:(id)arg0 ;
-(void)addKeyInputs:(id)arg0 ;
-(void)addTouches:(id)arg0 withLayoutIDs:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif