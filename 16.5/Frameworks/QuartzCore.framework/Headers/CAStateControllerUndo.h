// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CASTATECONTROLLERUNDO_H
#define CASTATECONTROLLERUNDO_H

@class NSString, NSMutableArray;
@protocol CAStateRecorder;

#import <Foundation/Foundation.h>

#import "CAStateControllerUndo.h"
#import "CAState.h"

@interface CAStateControllerUndo : NSObject <CAStateRecorder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *elements; // ivar: _elements
@property (readonly) NSUInteger hash;
@property (readonly) CAStateControllerUndo *next; // ivar: _next
@property (retain, nonatomic) CAState *state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *transitions; // ivar: _transitions


-(void)addElement:(id)arg0 ;
-(void)addTransition:(id)arg0 ;
-(void)dealloc;
-(void)willAddLayer:(id)arg0 ;


@end


#endif