// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RERESOURCESHARINGCLIENTOBJECT_H
#define RERESOURCESHARINGCLIENTOBJECT_H

@class NSString;
@protocol REResourceSharingService;

#import <Foundation/Foundation.h>


@interface REResourceSharingClientObject : NSObject <REResourceSharingService>



@property (readonly, nonatomic) *AssetService assetService; // ivar: _assetService
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger peerID; // ivar: _peerID
@property (readonly, nonatomic) *void resourceSharingManager; // ivar: _resourceSharingManager
@property (readonly) Class superclass;


-(id)initWithAssetService:(struct AssetService *)arg0 resourceSharingManager:(*void)arg1 peerID:(NSUInteger)arg2 ;
-(id)redactedDescription;
-(void)fetchResourceAtAssetPath:(id)arg0 withReply:(id)arg1 ;
-(void)invalidate;
-(void)setSubscriptionOptions:(id)arg0 forResourceAtAssetPath:(id)arg1 ;
-(void)unsubscribeFromResourceAtAssetPath:(id)arg0 ;


@end


#endif