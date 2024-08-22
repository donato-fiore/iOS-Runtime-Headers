// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDALBUMCONTACTMATCHER_H
#define PXSHAREDALBUMCONTACTMATCHER_H

@class CNContactStore, NSCache;

#import <Foundation/Foundation.h>


@interface PXSharedAlbumContactMatcher : NSObject {
    CNContactStore *_contactStore;
    NSCache *_avatarRendererByContactImageDiameter;
    NSCache *_contactIdentifiersBySubscriberIdentifiers;
    NSCache *_contactPhotosCache;
}




+(id)sharedMatcher;
-(id)_fetchContactMatchingIdentifier:(id)arg0 keysToFetch:(id)arg1 ;
-(id)_fetchContactMatchingSubscriberInfo:(id)arg0 keysToFetch:(id)arg1 ;
-(id)_fetchContactsMatchingIdentifiers:(id)arg0 keysToFetch:(id)arg1 ;
-(id)contactsMatchingSubscriberInfos:(id)arg0 keysToFetch:(id)arg1 ;
-(id)init;
-(void)_observeContactStoreNotifications;
-(void)contactsDidChange:(id)arg0 ;
-(void)requestContactPhotoForContact:(id)arg0 diameter:(CGFloat)arg1 resultHandler:(id)arg2 ;


@end


#endif