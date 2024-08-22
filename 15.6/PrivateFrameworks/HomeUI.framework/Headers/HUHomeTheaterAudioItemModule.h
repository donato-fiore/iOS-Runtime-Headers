// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUHOMETHEATERAUDIOITEMMODULE_H
#define HUHOMETHEATERAUDIOITEMMODULE_H

@class HFItemModule, NSSet, HFItem, NSString;
@protocol HUHomeTheaterAudioItemModuleDelegate, HFMediaProfileContainer;



@interface HUHomeTheaterAudioItemModule : HFItemModule {
    NSSet *_itemProviders;
}


@property (weak, nonatomic) NSObject<HUHomeTheaterAudioItemModuleDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL disableAutomaticCommit; // ivar: _disableAutomaticCommit
@property (readonly, nonatomic) BOOL includeLocalDestinations; // ivar: _includeLocalDestinations
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer
@property (readonly, weak, nonatomic) HFItem *selectedUncommittedItem; // ivar: _selectedUncommittedItem
@property (retain, nonatomic) NSString *tappedDestinationIdentifier; // ivar: _tappedDestinationIdentifier


-(id)_updateDestinationToIdentifier:(id)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)commitConfiguration;
-(id)initWithItemUpdater:(id)arg0 mediaProfileContainer:(id)arg1 includeLocalDestinations:(BOOL)arg2 ;
-(id)itemProviders;
-(void)_createItemProviders;
-(void)selectItem:(id)arg0 ;


@end


#endif