// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIREDEEMIDMANAGER_H
#define SKUIREDEEMIDMANAGER_H

@class NSIndexPath, NSString, UITableView;
@protocol SKUIRedeemIdTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource, SKUIRedeemIdManagerDelegate;

#import <Foundation/Foundation.h>

#import "SKUIClientContext.h"
#import "SKUIPinnedFooterView.h"

@interface SKUIRedeemIdManager : NSObject <SKUIRedeemIdTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource>



@property (retain, nonatomic) NSIndexPath *activeIndexPath; // ivar: _activeIndexPath
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIRedeemIdManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIPinnedFooterView *pinnedFooterView; // ivar: _pinnedFooterView
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(CGFloat)_heightForDisclosureFooter;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_autoCapitalizationTypeForIndexPath:(id)arg0 ;
-(NSInteger)_keyboardTypeForIndexPath:(id)arg0 ;
-(NSInteger)_numberOfRowsInSection:(NSInteger)arg0 ;
-(NSInteger)_returnKeyTypeForIndexPath:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_disclosureAttributedString;
-(id)_nextIndexPath:(id)arg0 ;
-(id)_pcLinkString;
-(id)_placeholderTextForIndexPath:(id)arg0 ;
-(id)_regulationsLinkString;
-(id)initWithClientContext:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)dismissActiveCell;
-(void)handleNextPressed;
-(void)redeemIdCell:(id)arg0 didChangeToText:(id)arg1 ;
-(void)redeemIdCell:(id)arg0 didReturnWithText:(id)arg1 ;
-(void)setFooterHidden:(BOOL)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif