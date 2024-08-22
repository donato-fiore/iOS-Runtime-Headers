// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARCELLULARITEM_H
#define _UISTATUSBARCELLULARITEM_H

@class NSString;
@protocol _UIStatusBarCellularItemTypeStringProvider;


#import "UIStatusBarItem.h"
#import "_UIStatusBarImageView.h"
#import "_UIStatusBarStringView.h"
#import "_UIStatusBarCellularSignalView.h"

@interface _UIStatusBarCellularItem : UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarImageView *callForwardingView; // ivar: _callForwardingView
@property (readonly, nonatomic) NSString *cellularDataEntryKey;
@property (nonatomic) BOOL marqueeServiceName; // ivar: _marqueeServiceName
@property (retain, nonatomic) _UIStatusBarStringView *networkTypeView; // ivar: _networkTypeView
@property (retain, nonatomic) _UIStatusBarStringView *rawStringView; // ivar: _rawStringView
@property (retain, nonatomic) _UIStatusBarStringView *serviceNameView; // ivar: _serviceNameView
@property (nonatomic) BOOL showsDisabledSignalBars; // ivar: _showsDisabledSignalBars
@property (retain, nonatomic) _UIStatusBarCellularSignalView *signalView; // ivar: _signalView
@property (retain, nonatomic) _UIStatusBarImageView *sosView; // ivar: _sosView
@property (weak, nonatomic) NSObject<_UIStatusBarCellularItemTypeStringProvider> *typeStringProvider; // ivar: _typeStringProvider
@property (retain, nonatomic) _UIStatusBarImageView *warningView; // ivar: _warningView


+(id)callForwardingDisplayIdentifier;
+(id)groupWithHighPriority:(NSInteger)arg0 lowPriority:(NSInteger)arg1 typeClass:(Class)arg2 allowDualNetwork:(BOOL)arg3 ;
+(id)nameDisplayIdentifier;
+(id)rawDisplayIdentifier;
+(id)signalStrengthDisplayIdentifier;
+(id)sosDisplayIdentifier;
+(id)typeDisplayIdentifier;
+(id)warningDisplayIdentifier;
-(BOOL)_hideSignalViewWithData:(id)arg0 cellularEntry:(id)arg1 ;
-(BOOL)_showCallFowardingForEntry:(id)arg0 ;
-(BOOL)_updateSignalView:(id)arg0 withUpdate:(id)arg1 entry:(id)arg2 forceShowingDisabledSignalBars:(BOOL)arg3 ;
-(id)_backgroundColorForUpdate:(id)arg0 entry:(id)arg1 ;
-(id)_fillColorForUpdate:(id)arg0 entry:(id)arg1 ;
-(id)_stringForCellularType:(NSInteger)arg0 ;
-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)dependentEntryKeys;
-(id)entryForDisplayItemWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 statusBar:(id)arg1 ;
-(id)viewForIdentifier:(id)arg0 ;
-(void)prepareAnimation:(id)arg0 forDisplayItem:(id)arg1 ;
-(void)setmarqueeServiceName:(BOOL)arg0 ;


@end


#endif