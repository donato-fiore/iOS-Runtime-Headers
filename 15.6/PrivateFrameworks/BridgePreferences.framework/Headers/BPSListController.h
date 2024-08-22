// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BPSLISTCONTROLLER_H
#define BPSLISTCONTROLLER_H

@class PSListController;



@interface BPSListController : PSListController

@property (nonatomic) BOOL deferringReloadSpecifiers; // ivar: _deferringReloadSpecifiers


-(BOOL)_readyToReloadSpecifiers;
-(NSInteger)tableViewStyle;
-(void)prepareSpecifiersMetadata;
-(void)reloadSpecifiers;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif