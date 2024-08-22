// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUIREPORTAPPLISTCONTROLLER_H
#define PUIREPORTAPPLISTCONTROLLER_H

@class PSListController, NSArray, UsageFeed, AnalyticsWorkspace;



@interface PUIReportAppListController : PSListController

@property (nonatomic) BOOL alphabeticalSort; // ivar: _alphabeticalSort
@property (retain, nonatomic) NSArray *cachedSpecifiers; // ivar: _cachedSpecifiers
@property (retain, nonatomic) UsageFeed *feed; // ivar: _feed
@property (retain, nonatomic) AnalyticsWorkspace *workspace; // ivar: _workspace


+(BOOL)appSpecifiersWithLimit:(NSUInteger)arg0 completion:(id)arg1 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)init;
-(id)specifiers;
-(void)dataDidChange;
-(void)dealloc;
-(void)sortByWasTapped;


@end


#endif