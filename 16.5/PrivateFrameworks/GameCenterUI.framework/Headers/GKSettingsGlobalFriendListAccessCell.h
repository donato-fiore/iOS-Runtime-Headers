// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKSETTINGSGLOBALFRIENDLISTACCESSCELL_H
#define GKSETTINGSGLOBALFRIENDLISTACCESSCELL_H

@class PSSwitchTableCell, PSSpecifier;



@interface GKSettingsGlobalFriendListAccessCell : PSSwitchTableCell

@property (weak, nonatomic) PSSpecifier *specfier; // ivar: _specfier


-(BOOL)canReload;
-(BOOL)globalFriendListAccess;
-(id)getSwitch;
-(void)controlChanged:(id)arg0 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif