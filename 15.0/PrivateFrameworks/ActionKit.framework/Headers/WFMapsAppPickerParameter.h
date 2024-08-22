// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMAPSAPPPICKERPARAMETER_H
#define WFMAPSAPPPICKERPARAMETER_H

@class WFEnumerationParameter, NSArray, NSOrderedSet;
@protocol ICAppInstallStatusObserver;



@interface WFMapsAppPickerParameter : WFEnumerationParameter <ICAppInstallStatusObserver>

 {
    NSArray *_possibleStates;
}


@property (readonly, nonatomic) NSOrderedSet *supportedAppIdentifiers; // ivar: _supportedAppIdentifiers


-(id)initWithDefinition:(id)arg0 ;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)possibleStates;
-(id)possibleStatesForLocalization;
-(void)addObservers;
-(void)appRegistry:(id)arg0 installStatusChangedForApp:(id)arg1 ;
-(void)dealloc;
-(void)refreshInstalledApps;
-(void)removeObservers;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;


@end


#endif