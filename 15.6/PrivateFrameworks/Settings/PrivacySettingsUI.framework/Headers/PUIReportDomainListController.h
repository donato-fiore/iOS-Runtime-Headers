// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUIREPORTDOMAINLISTCONTROLLER_H
#define PUIREPORTDOMAINLISTCONTROLLER_H

@class PSListController, NSArray;



@interface PUIReportDomainListController : PSListController

@property (nonatomic) BOOL alphabeticalSort; // ivar: _alphabeticalSort
@property (retain, nonatomic) NSArray *cachedSpecifiers; // ivar: _cachedSpecifiers
@property (nonatomic) BOOL showWebsiteAndAppCounts; // ivar: _showWebsiteAndAppCounts


+(BOOL)domainSpecifiersWithLimit:(NSUInteger)arg0 showDates:(BOOL)arg1 showAppAndWebsiteCounts:(BOOL)arg2 showIPAddresses:(BOOL)arg3 completion:(id)arg4 ;
+(id)domainSpecifiersFromResults:(id)arg0 showDates:(BOOL)arg1 showAppAndWebsiteCounts:(BOOL)arg2 app:(id)arg3 appOther:(id)arg4 website:(id)arg5 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)init;
-(id)specifiers;
-(void)dataDidChange;
-(void)dealloc;
-(void)sortByWasTapped;


@end


#endif