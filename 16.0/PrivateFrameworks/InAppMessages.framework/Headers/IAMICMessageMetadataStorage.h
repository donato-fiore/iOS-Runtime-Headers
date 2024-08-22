// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IAMICMESSAGEMETADATASTORAGE_H
#define IAMICMESSAGEMETADATASTORAGE_H

@class ICInAppMessageManager, NSString;
@protocol IAMMessageMetadataStorage;

#import <Foundation/Foundation.h>


@interface IAMICMessageMetadataStorage : NSObject <IAMMessageMetadataStorage>

 {
    ICInAppMessageManager *_iTunesCloudIAMManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)metadataForBundleIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)updateMetadata:(id)arg0 messageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(id)arg3 ;


@end


#endif