// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXASSETMETADATADONATOR_H
#define PXASSETMETADATADONATOR_H

@class NSCountedSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXAssetMetadataDonator : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // ivar: _backgroundQueue
@property (retain, nonatomic) NSCountedSet *locationDescriptions; // ivar: _locationDescriptions
@property (retain, nonatomic) NSMutableDictionary *locationDescriptionsByAssetLocalIdentifiers; // ivar: _locationDescriptionsByAssetLocalIdentifiers


+(id)new;
+(id)sharedDonator;
-(id)_init;
-(id)init;
-(void)_notifyWhenDonationIsComplete:(id)arg0 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)donate:(id)arg0 ;
-(void)donateMetadataForAsset:(id)arg0 ;


@end


#endif