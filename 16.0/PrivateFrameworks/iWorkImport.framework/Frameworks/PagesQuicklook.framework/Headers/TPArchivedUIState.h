// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPARCHIVEDUISTATE_H
#define TPARCHIVEDUISTATE_H

@class TSPObject;


#import "TPUIState.h"

@interface TPArchivedUIState : TSPObject

@property (copy, nonatomic) TPUIState *uiState; // ivar: _uiState


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToArchivedUIState:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithContext:(id)arg0 uiState:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif