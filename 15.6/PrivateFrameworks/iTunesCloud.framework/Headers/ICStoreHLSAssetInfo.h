// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSTOREHLSASSETINFO_H
#define ICSTOREHLSASSETINFO_H

@class NSDictionary, NSURL, NSSet, NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICStoreHLSAssetInfo : NSObject <NSCopying>

 {
    NSDictionary *_itemResponseDictionary;
}


@property (readonly, copy, nonatomic) NSURL *alternateKeyCertificateURL;
@property (readonly, copy, nonatomic) NSURL *alternateKeyServerURL;
@property (readonly, copy, nonatomic) NSURL *alternatePlaylistURL;
@property (copy, nonatomic) NSSet *audioTraits; // ivar: _audioTraits
@property (nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream; // ivar: _isiTunesStoreStream
@property (copy, nonatomic) NSURL *keyCertificateURL; // ivar: _keyCertificateURL
@property (copy, nonatomic) NSNumber *keyServerAdamID; // ivar: _keyServerAdamID
@property (copy, nonatomic) NSString *keyServerProtocolType; // ivar: _keyServerProtocolType
@property (copy, nonatomic) NSURL *keyServerURL; // ivar: _keyServerURL
@property (copy, nonatomic) NSURL *playlistURL; // ivar: _playlistURL


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithItemResponseDictionary:(id)arg0 ;


@end


#endif