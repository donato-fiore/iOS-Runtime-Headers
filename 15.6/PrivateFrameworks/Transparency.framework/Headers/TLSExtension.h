// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLSEXTENSION_H
#define TLSEXTENSION_H

@class NSData;
@protocol TLSMessage;


#import "TLSMessage.h"

@interface TLSExtension : TLSMessage <TLSMessage>



@property (retain) NSData *extensionData; // ivar: _extensionData
@property unsigned char extensionType; // ivar: _extensionType
@property NSUInteger parsedLength; // ivar: _parsedLength


+(id)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)data;


@end


#endif