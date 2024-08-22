// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAFAMILYSETTINGSMEMBERSPECIFIERPROVIDER_H
#define FAFAMILYSETTINGSMEMBERSPECIFIERPROVIDER_H

@class FAFamilyCircle, PSSpecifier, NSDictionary, NSArray;
@protocol FAFamilySettingsMemberSpecifierProviderDelegeate, FAFamilyMemberCardTapHandler;

#import <Foundation/Foundation.h>

#import "FAProfilePictureStore.h"

@interface FAFamilySettingsMemberSpecifierProvider : NSObject {
    FAFamilyCircle *_familyCircle;
    FAProfilePictureStore *_familyPictureStore;
    PSSpecifier *_addFamilyMemberCell;
    NSDictionary *_cachedResourceDictionary;
    NSUInteger _specifierState;
}


@property (weak, nonatomic) NSObject<FAFamilySettingsMemberSpecifierProviderDelegeate> *delegate; // ivar: _delegate
@property (weak, nonatomic) NSObject<FAFamilyMemberCardTapHandler> *memberCardTapHandler; // ivar: _memberCardTapHandler
@property (copy, nonatomic) NSArray *specifiers; // ivar: _specifiers


-(BOOL)_launchWithResourceDictionary:(id)arg0 ;
-(BOOL)handleURL:(id)arg0 ;
-(id)_createSpecifierForFamilyMemberCell:(id)arg0 ;
-(id)_createSpecifierForPendingMember:(id)arg0 ;
-(id)_specifierWithID:(id)arg0 ;
-(id)initWithAppleAccount:(id)arg0 familyCircle:(id)arg1 familyPictureStore:(id)arg2 ;
-(void)_addFamilyMemberButtonWasTapped:(id)arg0 ;
-(void)_delayedLoadIfNeeded;
-(void)_familyMemberCellWasTapped:(id)arg0 ;
-(void)_pendingFamilyMemberCellWasTapped:(id)arg0 ;
-(void)reloadSpecifiers;
-(void)setFamilyCircle:(id)arg0 ;


@end


#endif