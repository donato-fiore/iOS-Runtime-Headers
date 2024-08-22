// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSADBLOCKERASSETDECODERV3_H
#define CSADBLOCKERASSETDECODERV3_H

@class NSString, NSData, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CSAdBlockerAssetDecoderV3 : NSObject

@property (readonly, nonatomic) NSString *assetVersion; // ivar: _assetVersion
@property (readonly, nonatomic) float maxFingerprintBufferSize; // ivar: _maxFingerprintBufferSize
@property (retain, nonatomic) NSData *payloadData; // ivar: _payloadData
@property (readonly, nonatomic) NSMutableDictionary *shouldResetAdsDictionary; // ivar: _shouldResetAdsDictionary


-(id)initWithData:(id)arg0 ;


@end


#endif