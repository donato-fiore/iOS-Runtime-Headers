// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSCLIENTDETAILS_H
#define DNDSCLIENTDETAILS_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface DNDSClientDetails : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic, getter=isIOS14SyncSuppressedClient) BOOL iOS14SyncSuppressedClient; // ivar: _iOS14SyncSuppressedClient
@property (readonly, copy, nonatomic) NSArray *identifiers; // ivar: _identifiers
@property (readonly, nonatomic, getter=isPersistentAssertionClient) BOOL persistentAssertionClient; // ivar: _persistentAssertionClient
@property (readonly, nonatomic, getter=isResolutionContextAssumingDeviceUILocked) BOOL resolutionContextAssumingDeviceUILocked; // ivar: _resolutionContextAssumingDeviceUILocked
@property (readonly, nonatomic, getter=isSyncSuppressedClient) BOOL syncSuppressedClient; // ivar: _syncSuppressedClient
@property (readonly, nonatomic, getter=isUserInteractionClient) BOOL userInteractionClient; // ivar: _userInteractionClient


+(id)_detailsForClientIdentifier:(id)arg0 bundleInfoDictionary:(id)arg1 ;
+(id)detailsForBundleAtURL:(id)arg0 ;
+(id)detailsForClientIdentifier:(id)arg0 applicationBundleURL:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithClientIdentifier:(id)arg0 identifiers:(id)arg1 resolutionContextAssumingDeviceUILocked:(BOOL)arg2 userInteractionClient:(BOOL)arg3 persistentAssertionClient:(BOOL)arg4 syncSuppressedClient:(BOOL)arg5 iOS14SyncSuppressedClient:(BOOL)arg6 ;


@end


#endif