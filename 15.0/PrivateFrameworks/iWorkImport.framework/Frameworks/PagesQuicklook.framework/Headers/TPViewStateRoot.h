// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPVIEWSTATEROOT_H
#define TPVIEWSTATEROOT_H

@class TSKViewStateRoot;


#import "TPArchivedLayoutState.h"
#import "TPArchivedUIState.h"
#import "TPLayoutState.h"
#import "TPUIState.h"

@interface TPViewStateRoot : TSKViewStateRoot {
    TPArchivedLayoutState *_archivedLayoutState;
    TPArchivedUIState *_archivedUIState;
}


@property (copy, nonatomic) TPLayoutState *layoutState;
@property (copy, nonatomic) TPUIState *uiState;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToViewStateRoot:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 layoutState:(id)arg1 uiState:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif