// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TNARCHIVEDUISTATE_H
#define TNARCHIVEDUISTATE_H

@class TSKViewStateRoot;


#import "TNUIState.h"

@interface TNArchivedUIState : TSKViewStateRoot

@property (readonly, nonatomic) TNUIState *uiState; // ivar: _uiState


-(id)initWithUIState:(id)arg0 context:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif