// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNARCHIVEDUISTATE_H
#define KNARCHIVEDUISTATE_H

@class TSKViewStateRoot;


#import "KNUIState.h"

@interface KNArchivedUIState : TSKViewStateRoot

@property (readonly, nonatomic) KNUIState *uiState; // ivar: _uiState


-(id)initWithUIState:(id)arg0 context:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif