// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFADDRESSLISTFORMATTER_H
#define MFADDRESSLISTFORMATTER_H

@class NSFormatter, MFAddressBookManager, EFLazyCache, NSString;
@protocol MFAddressBookClient, EMUserProfileProvider;


#import "MFLocalizationListFormatter.h"

@interface MFAddressListFormatter : NSFormatter <MFAddressBookClient>



@property (retain, nonatomic) MFAddressBookManager *addressBookManager; // ivar: _addressBookManager
@property (retain, nonatomic) EFLazyCache *addressCache; // ivar: _addressCache
@property (retain, nonatomic) EFLazyCache *commentCache; // ivar: _commentCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MFLocalizationListFormatter *listFormatter; // ivar: _listFormatter
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<EMUserProfileProvider> *userProfileProvider; // ivar: _userProfileProvider


-(id)_addressCommentForAddressList:(id)arg0 ;
-(id)init;
-(id)initWithUserProfileProvider:(id)arg0 addressBookManager:(id)arg1 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromAddressAddressList:(id)arg0 ;
-(id)stringFromEmailAddressList:(id)arg0 ;
-(void)_invalidateCache;
-(void)addressBookManager:(id)arg0 addressBookDidChange:(*void)arg1 ;
-(void)addressBookPreferencesChangedForAddressBookManager:(id)arg0 ;
-(void)dealloc;


@end


#endif