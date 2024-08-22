// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFCONTENTBLOCKERSPREFERENCEMANAGER_H
#define _SFCONTENTBLOCKERSPREFERENCEMANAGER_H

@class WBSContentBlockersPreferenceManager, NSString;
@protocol SFContentBlockerManagerObserver;



@interface _SFContentBlockersPreferenceManager : WBSContentBlockersPreferenceManager <SFContentBlockerManagerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasEnabledContentBlockers; // ivar: _hasEnabledContentBlockers
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPerSitePreferencesStore:(id)arg0 ;
-(void)_checkForContentBlockers;
-(void)contentBlockerManagerExtensionListDidChange:(id)arg0 ;
-(void)invalidate;


@end


#endif