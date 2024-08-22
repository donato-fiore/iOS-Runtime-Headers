// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSADBLOCKERASSETDECODERV1_H
#define CSADBLOCKERASSETDECODERV1_H

@class NSString, NSData, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CSAdBlockerAssetDecoderV1 : NSObject

@property (readonly, nonatomic) NSString *assetVersion; // ivar: _assetVersion
@property (readonly, nonatomic) float maxFingerprintBufferSize; // ivar: _maxFingerprintBufferSize
@property (retain, nonatomic) NSData *payloadData; // ivar: _payloadData
@property (readonly, nonatomic) NSMutableDictionary *shouldResetAdsDictionary; // ivar: _shouldResetAdsDictionary


-(id)initWithData:(id)arg0 ;


@end


#endif