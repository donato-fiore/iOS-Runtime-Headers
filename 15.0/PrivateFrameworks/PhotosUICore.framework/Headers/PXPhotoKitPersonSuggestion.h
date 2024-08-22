// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOKITPERSONSUGGESTION_H
#define PXPHOTOKITPERSONSUGGESTION_H

@class CNContact, NSString, PHFetchResult, PHPerson;
@protocol PXPersonSuggestion;

#import <Foundation/Foundation.h>

#import "PXRecipientTransport.h"

@interface PXPhotoKitPersonSuggestion : NSObject <PXPersonSuggestion>

 {
    BOOL _fetchQueue_checkedForLinkedContact;
    CNContact *_fetchQueue_linkedContact;
    PXRecipientTransport *_fetchQueue_bestTransport;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PHFetchResult *keyAssetFetchResult; // ivar: _keyAssetFetchResult
@property (readonly, nonatomic) PHFetchResult *keyFaceFetchResult; // ivar: _keyFaceFetchResult
@property (readonly, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) PHPerson *person; // ivar: _person
@property (readonly) Class superclass;


+(id)personSuggestionWithPerson:(id)arg0 ;
+(id)personSuggestionWithPerson:(id)arg0 keyFaceFetchResult:(id)arg1 ;
+(id)personSuggestionWithPerson:(id)arg0 keyFaceFetchResult:(id)arg1 keyAssetFetchResult:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesRecipientInRecipients:(id)arg0 ;
-(id)_linkedContactForPerson:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithPerson:(id)arg0 keyFaceFetchResult:(id)arg1 keyAssetFetchResult:(id)arg2 ;
-(id)personSuggestionUpdatedKeyAssetFetchResult:(id)arg0 ;
-(id)personSuggestionUpdatedKeyFaceFetchResult:(id)arg0 ;
-(id)personSuggestionUpdatedPerson:(id)arg0 ;
-(void)_fetchQueue_fetchLinkedContactForPerson:(id)arg0 ;
-(void)_prefetchLinkedContactInBackgroundForPerson:(id)arg0 ;
-(void)fetchContactAndBestTransport:(id)arg0 ;


@end


#endif