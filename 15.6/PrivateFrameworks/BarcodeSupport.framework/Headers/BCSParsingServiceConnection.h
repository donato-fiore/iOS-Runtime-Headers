// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSPARSINGSERVICECONNECTION_H
#define BCSPARSINGSERVICECONNECTION_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface BCSParsingServiceConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *parsingServiceConnection; // ivar: _parsingServiceConnection


-(void)dealloc;
-(void)decodeAppClipCodeURLWithEncodedData:(id)arg0 codingVersion:(NSUInteger)arg1 requiresAuthorization:(BOOL)arg2 withReply:(id)arg3 ;
-(void)parseQRCodeFeature:(id)arg0 withReply:(id)arg1 ;
-(void)parseQRCodeMetadata:(id)arg0 withReply:(id)arg1 ;
-(void)parseQRCodeString:(id)arg0 withReply:(id)arg1 ;
-(void)setPreferredBundleIdentifier:(id)arg0 forURL:(id)arg1 ;


@end


#endif