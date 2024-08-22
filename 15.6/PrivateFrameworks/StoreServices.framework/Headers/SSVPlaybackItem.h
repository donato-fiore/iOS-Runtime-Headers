// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSVPLAYBACKITEM_H
#define SSVPLAYBACKITEM_H

@class NSURL, NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface SSVPlaybackItem : NSObject

@property (readonly, nonatomic) NSURL *HLSKeyCertificateURL;
@property (readonly, nonatomic) NSURL *HLSKeyServerURL;
@property (readonly, nonatomic) NSURL *HLSPlaylistURL;
@property (readonly, nonatomic) NSArray *assets;
@property (copy, nonatomic) NSURL *fallbackStreamingKeyCertificateURL; // ivar: _fallbackStreamingKeyCertificateURL
@property (copy, nonatomic) NSURL *fallbackStreamingKeyServerURL; // ivar: _fallbackStreamingKeyServerURL
@property (readonly, nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream;
@property (readonly, copy, nonatomic) NSDictionary *itemDictionary; // ivar: _itemDictionary
@property (readonly, copy, nonatomic) id *itemIdentifier;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)assetForFlavor:(id)arg0 ;
-(id)description;
-(id)initWithItemDictionary:(id)arg0 ;
-(void)_enumerateAssetsUsingBlock:(id)arg0 ;


@end


#endif