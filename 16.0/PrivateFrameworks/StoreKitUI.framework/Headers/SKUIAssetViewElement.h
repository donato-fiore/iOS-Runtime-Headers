// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIASSETVIEWELEMENT_H
#define SKUIASSETVIEWELEMENT_H

@class NSURL, NSString;


#import "SKUIViewElement.h"

@interface SKUIAssetViewElement : SKUIViewElement

@property (readonly, nonatomic, getter=isITunesStream) BOOL ITunesStream; // ivar: _ITunesStream
@property (readonly, nonatomic) NSURL *URL; // ivar: _url
@property (nonatomic) CGFloat initialPlaybackTime; // ivar: _initialPlaybackTime
@property (readonly, nonatomic) NSInteger itemIdentifier; // ivar: _itemIdentifier
@property (readonly, retain, nonatomic) NSURL *keyCertificateURL; // ivar: _keyCertificateURL
@property (readonly, retain, nonatomic) NSURL *keyServerURL; // ivar: _keyServerURL
@property (readonly, nonatomic) CGFloat playbackDuration; // ivar: _playbackDuration
@property (readonly, copy, nonatomic) NSString *secureKeyDeliveryType; // ivar: _secureKeyDeliveryType


-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif