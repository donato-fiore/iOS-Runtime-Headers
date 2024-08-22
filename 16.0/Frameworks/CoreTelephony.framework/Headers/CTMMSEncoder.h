// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTMMSENCODER_H
#define CTMMSENCODER_H


#import <Foundation/Foundation.h>


@interface CTMMSEncoder : NSObject



+(id)decodeMessageFromData:(id)arg0 ;
+(id)decodeMessageFromData:(id)arg0 data:(id)arg1 ;
+(id)decodeSmsFromData:(id)arg0 ;
+(id)decodeSmsFromData:(id)arg0 data:(id)arg1 ;
+(id)encodeMessage:(id)arg0 ;
+(id)encodeSms:(id)arg0 ;


@end


#endif