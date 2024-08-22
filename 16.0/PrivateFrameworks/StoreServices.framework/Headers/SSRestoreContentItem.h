// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSRESTORECONTENTITEM_H
#define SSRESTORECONTENTITEM_H

@class NSNumber, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SSRestoreContentItem : NSObject {
    NSNumber *_accountID;
    NSNumber *_originalPurchaserAccountID;
    NSString *_appleID;
    NSNumber *_cloudMatchStatus;
    BOOL _isRestore;
    NSMutableDictionary *_properties;
}


@property (nonatomic, getter=isDRMFree) BOOL DRMFree;
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSNumber *cloudItemID;
@property (retain, nonatomic) NSNumber *cloudMatchStatus;
@property (copy, nonatomic) NSString *downloadKind;
@property (copy, nonatomic) NSString *podcastEpisodeGUID;
@property (copy, nonatomic) NSString *storeAccountAppleID;
@property (retain, nonatomic) NSNumber *storeAccountID;
@property (copy, nonatomic) NSString *storeFlavor;
@property (copy, nonatomic) NSString *storeFrontID;
@property (retain, nonatomic) NSNumber *storeItemID;
@property (retain, nonatomic) NSNumber *storeOriginalPurchaserAccountID;
@property (copy, nonatomic) NSString *storeSoftwareVersionID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *videoDimensions;


-(BOOL)isEligibleForRestore:(*id)arg0 ;
-(id)_initSSRestoreContentItem;
-(id)_restoreKeyForAssetProperty:(id)arg0 ;
-(id)_restoreKeyForDownloadProperty:(id)arg0 ;
-(id)copyRestoreDictionary;
-(id)init;
-(id)initWithRestoreDownload:(id)arg0 ;
-(void)_setValue:(id)arg0 forProperty:(id)arg1 ;
-(void)dealloc;
-(void)setValue:(id)arg0 forAssetProperty:(id)arg1 ;
-(void)setValue:(id)arg0 forDownloadProperty:(id)arg1 ;


@end


#endif