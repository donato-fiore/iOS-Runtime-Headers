// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIPLAYABLEASSET_H
#define SKUIPLAYABLEASSET_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface SKUIPlayableAsset : NSObject

@property (readonly, nonatomic, getter=isITunesStream) BOOL ITunesStream; // ivar: _ITunesStream
@property (copy, nonatomic) NSURL *contentURL; // ivar: _contentURL
@property (nonatomic) CGFloat initialPlaybackTime; // ivar: _initialPlaybackTime
@property (readonly, retain, nonatomic) NSURL *keyCertificateURL; // ivar: _keyCertificateURL
@property (readonly, retain, nonatomic) NSURL *keyServerURL; // ivar: _keyServerURL
@property (nonatomic) CGFloat playbackDuration; // ivar: _playbackDuration
@property (nonatomic) BOOL shouldUseITunesStoreSecureKeyDelivery; // ivar: _shouldUseITunesStoreSecureKeyDelivery
@property (nonatomic) NSInteger storeItemIdentifier; // ivar: _storeItemIdentifier


-(id)init;
-(id)initWithContentURL:(id)arg0 ;
-(id)initWithVideo:(id)arg0 ;
-(id)initWithVideoViewElement:(id)arg0 assetViewElement:(id)arg1 ;


@end


#endif