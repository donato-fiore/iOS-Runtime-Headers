// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUIREPORTWEBSITELISTCONTROLLER_H
#define PUIREPORTWEBSITELISTCONTROLLER_H

@class PSListController, NSArray;



@interface PUIReportWebsiteListController : PSListController

@property (nonatomic) BOOL alphabeticalSort; // ivar: _alphabeticalSort
@property (retain, nonatomic) NSArray *cachedSpecifiers; // ivar: _cachedSpecifiers


+(BOOL)websiteSpecifiersWithLimit:(NSUInteger)arg0 showDetail:(BOOL)arg1 completion:(id)arg2 ;
+(id)websiteSpecifiersFromResults:(id)arg0 showDetail:(BOOL)arg1 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)init;
-(id)specifiers;
-(void)dataDidChange;
-(void)dealloc;
-(void)sortByWasTapped;


@end


#endif