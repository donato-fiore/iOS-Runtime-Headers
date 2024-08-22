// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IAMICMESSAGEENTRYPROVIDER_H
#define IAMICMESSAGEENTRYPROVIDER_H

@class ICInAppMessageManager, NSString;
@protocol IAMMessageEntryProvider, IAMMessageEntryProviderDelegate;

#import <Foundation/Foundation.h>


@interface IAMICMessageEntryProvider : NSObject <IAMMessageEntryProvider>

 {
    ICInAppMessageManager *_iTunesCloudIAMManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IAMMessageEntryProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_handleMessagesDidChangeNotification;
-(void)downloadResourcesForMessageWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)messageEntriesForBundleIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)removeApplicationBadgeForBundleIdentifier:(id)arg0 fromPresentedMessageEntry:(id)arg1 completion:(id)arg2 ;
-(void)removeMessageEntryWithIdentifier:(id)arg0 forBundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)reportEventForMessageIdentifier:(id)arg0 withParams:(id)arg1 completion:(id)arg2 ;


@end


#endif