// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARBUILDVERSIONITEM_H
#define _UISTATUSBARBUILDVERSIONITEM_H



#import "UIStatusBarItem.h"
#import "_UIStatusBarStringView.h"

@interface _UIStatusBarBuildVersionItem : UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarStringView *buildVersionView; // ivar: _buildVersionView


-(BOOL)canEnableDisplayItem:(id)arg0 fromData:(id)arg1 ;
-(BOOL)needsUpdate;
-(id)viewForIdentifier:(id)arg0 ;


@end


#endif