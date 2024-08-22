// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASEDITORCALLOUTDATA_H
#define ICASEDITORCALLOUTDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASCollabActivityContextPath.h"
#import "ICASEndState.h"
#import "ICASStartState.h"

@interface ICASEditorCallOutData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASCollabActivityContextPath *collabActivityContextPath; // ivar: _collabActivityContextPath
@property (readonly, nonatomic) ICASEndState *endState; // ivar: _endState
@property (readonly, nonatomic) ICASStartState *startState; // ivar: _startState


+(id)dataName;
-(id)initWithCollabActivityContextPath:(id)arg0 startState:(id)arg1 endState:(id)arg2 ;
-(id)toDict;


@end


#endif