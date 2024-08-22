// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTODOISTPROJECTPICKERPARAMETER_H
#define WFTODOISTPROJECTPICKERPARAMETER_H

@class WFEnumerationParameter, NSArray;


#import "WFAccountAccessResource.h"

@interface WFTodoistProjectPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}


@property (weak, nonatomic) WFAccountAccessResource *accessResource; // ivar: _accessResource
@property (nonatomic) BOOL hasLoadedProjects; // ivar: _hasLoadedProjects


-(id)accessoryColorForPossibleState:(id)arg0 ;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)possibleStates;
-(id)projectNamed:(id)arg0 ;
-(id)projects;
-(void)dealloc;
-(void)fetchProjectsIfNeeded;
-(void)loadProjectsFromCache;
-(void)setProjects:(id)arg0 ;
-(void)wasAddedToWorkflow;


@end


#endif