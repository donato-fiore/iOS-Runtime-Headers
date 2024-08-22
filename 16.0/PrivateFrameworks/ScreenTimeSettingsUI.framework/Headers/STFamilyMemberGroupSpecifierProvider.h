// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STFAMILYMEMBERGROUPSPECIFIERPROVIDER_H
#define STFAMILYMEMBERGROUPSPECIFIERPROVIDER_H

@class NSString;
@protocol MCProfileConnectionObserver;


#import "STRootGroupSpecifierProvider.h"

@interface STFamilyMemberGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL presentedAsModal; // ivar: _presentedAsModal
@property (readonly) Class superclass;


+(id)providerWithCoordinator:(id)arg0 presentedAsModal:(BOOL)arg1 ;
-(id)createSpecifierForUser:(id)arg0 shouldWarn:(BOOL)arg1 ;
-(id)familySpecifiers;
-(id)init;
-(id)totalChildUsageTime:(id)arg0 ;
-(void)dealloc;
-(void)imageDidUpdate:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)setCoordinator:(id)arg0 ;


@end


#endif