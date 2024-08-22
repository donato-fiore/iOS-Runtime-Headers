// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFMEDIAACCESSCONTROLEDITORITEMMODULE_H
#define HFMEDIAACCESSCONTROLEDITORITEMMODULE_H

@class NSSet, NSString, HMHome;
@protocol HFHomeObserver;


#import "HFItemModule.h"
#import "HFMediaAccessControlEditorItemProvider.h"

@interface HFMediaAccessControlEditorItemModule : HFItemModule <HFHomeObserver>

 {
    NSSet *_itemProviders;
}


@property (readonly, nonatomic) HFMediaAccessControlEditorItemProvider *accessControlEditorItemProvider; // ivar: _accessControlEditorItemProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly) Class superclass;


+(id)_descriptionFooterTextForAccessControlDescriptor:(id)arg0 hasNonPeerToPeerMediaAccessories:(BOOL)arg1 ;
-(BOOL)_hasNonPeerToPeerMediaAccessories;
-(BOOL)containsItem:(id)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 ;
-(id)itemProviders;
-(id)updateAccessControlDescriptor:(id)arg0 ;
-(void)home:(id)arg0 didUpdateMediaPassword:(id)arg1 ;
-(void)home:(id)arg0 didUpdateMediaPeerToPeerEnabled:(BOOL)arg1 ;
-(void)home:(id)arg0 didUpdateMinimumMediaUserPrivilege:(NSInteger)arg1 ;


@end


#endif