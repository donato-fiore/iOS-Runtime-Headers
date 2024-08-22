// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPLAYLISTPICKERPARAMETER_H
#define WFPLAYLISTPICKERPARAMETER_H

@class WFEnumerationParameter, NSArray;


#import "WFAppleMusicAccessResource.h"
#import "WFPlaylistSubstitutableState.h"

@interface WFPlaylistPickerParameter : WFEnumerationParameter

@property (retain, nonatomic) WFAppleMusicAccessResource *appleMusicAccessResource; // ivar: _appleMusicAccessResource
@property (retain, nonatomic) WFPlaylistSubstitutableState *entireLibraryState; // ivar: _entireLibraryState
@property (nonatomic) BOOL generatingNotifications; // ivar: _generatingNotifications
@property (readonly, nonatomic) NSArray *possibleStates; // ivar: _possibleStates
@property (readonly, nonatomic) BOOL showLibrary; // ivar: _showLibrary


+(BOOL)hasPlaylistAccess;
+(id)referencedActionResourceClasses;
-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(void)authorizationStatusDidChange;
-(void)setActionResources:(id)arg0 ;
-(void)updateChangeNotificationRegistration;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;


@end


#endif