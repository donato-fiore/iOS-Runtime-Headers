// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMINTERNALPAYLOADUTILITIES_H
#define IMINTERNALPAYLOADUTILITIES_H


#import <Foundation/Foundation.h>


@interface IMInternalPayloadUtilities : NSObject



+(BOOL)writeMessagePayloadToDisk:(id)arg0 fileName:(id)arg1 ;
+(BOOL)writePayload:(id)arg0 toURL:(id)arg1 ;
+(id)writeMessagePayloadToTemporaryDirectory:(id)arg0 fileName:(id)arg1 ;


@end


#endif