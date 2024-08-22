// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSAPPCLIPCODEURLDECODER_H
#define BCSAPPCLIPCODEURLDECODER_H


#import <Foundation/Foundation.h>

#import "BCSParsingServiceConnection.h"

@interface BCSAppClipCodeURLDecoder : NSObject {
    BCSParsingServiceConnection *_serviceConnection;
}




+(id)sharedDecoder;
-(id)init;
-(void)decodeURLWithEncodedData:(id)arg0 codingVersion:(NSUInteger)arg1 requiresAuthorization:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)parseEncodedURLData:(id)arg0 version:(NSUInteger)arg1 completion:(id)arg2 ;


@end


#endif