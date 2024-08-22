// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSLINEARMOVEMENTSEQUENCE_H
#define _UIFOCUSLINEARMOVEMENTSEQUENCE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _UIFocusLinearMovementSequence : NSObject

@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic, getter=isLooping) BOOL looping; // ivar: _looping
@property (readonly, nonatomic, getter=restrictsEnteringSequence) BOOL restrictEnteringSequence; // ivar: _restrictEnteringSequence


+(id)sequenceWithItems:(id)arg0 loops:(BOOL)arg1 ;
+(id)sequenceWithItems:(id)arg0 loops:(BOOL)arg1 restrictEnteringSequence:(BOOL)arg2 ;
-(id)init;
-(id)initWithItems:(id)arg0 loops:(BOOL)arg1 ;
-(id)initWithItems:(id)arg0 loops:(BOOL)arg1 restrictEnteringSequence:(BOOL)arg2 ;


@end


#endif