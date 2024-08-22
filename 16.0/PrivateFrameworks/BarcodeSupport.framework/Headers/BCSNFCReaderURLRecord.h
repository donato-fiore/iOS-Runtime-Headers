// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSNFCREADERURLRECORD_H
#define BCSNFCREADERURLRECORD_H

@class NSURL;
@protocol NFNdefMessage;

#import <Foundation/Foundation.h>


@interface BCSNFCReaderURLRecord : NSObject

@property (readonly, nonatomic) NSObject<NFNdefMessage> *message; // ivar: _message
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)initWithURL:(id)arg0 message:(id)arg1 ;


@end


#endif