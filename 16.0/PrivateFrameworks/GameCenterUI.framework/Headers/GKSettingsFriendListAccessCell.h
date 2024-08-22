// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKSETTINGSFRIENDLISTACCESSCELL_H
#define GKSETTINGSFRIENDLISTACCESSCELL_H

@class PSSwitchTableCell, GKGame, GKGameSettingsInternal;



@interface GKSettingsFriendListAccessCell : PSSwitchTableCell

@property (retain, nonatomic) GKGame *currentGame; // ivar: _currentGame
@property (retain, nonatomic) GKGameSettingsInternal *currentGameSettings; // ivar: _currentGameSettings


+(NSInteger)cellStyle;
-(BOOL)canReload;
-(id)getSwitch;
-(void)controlChanged:(id)arg0 ;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif