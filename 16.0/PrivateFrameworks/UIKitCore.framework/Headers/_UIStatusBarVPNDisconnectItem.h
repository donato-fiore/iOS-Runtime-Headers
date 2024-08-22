// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARVPNDISCONNECTITEM_H
#define _UISTATUSBARVPNDISCONNECTITEM_H

@class NSTimer;


#import "UIStatusBarItem.h"
#import "_UIStatusBarVPNDisconnectView.h"

@interface _UIStatusBarVPNDisconnectItem : UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarVPNDisconnectView *disconnectView; // ivar: _disconnectView
@property (retain, nonatomic) NSTimer *slashBeginTimer; // ivar: _slashBeginTimer


-(BOOL)canEnableDisplayItem:(id)arg0 fromData:(id)arg1 ;
-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)dependentEntryKeys;
-(id)viewForIdentifier:(id)arg0 ;


@end


#endif