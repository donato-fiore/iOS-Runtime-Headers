// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSQRCODEPARSER_H
#define BCSQRCODEPARSER_H


#import <Foundation/Foundation.h>

#import "BCSParsingServiceConnection.h"
#import "BCSNotificationServiceConnection.h"

@interface BCSQRCodeParser : NSObject {
    BCSParsingServiceConnection *_parsingServiceConnection;
    BCSNotificationServiceConnection *_notificationServiceConnection;
}


@property (readonly, nonatomic) BCSNotificationServiceConnection *notificationServiceConnection;


+(id)sharedParser;
-(id)_payloadForMRCObject:(id)arg0 ;
-(id)_qrCodeFeatureFromImage:(struct CGImage *)arg0 ;
// -(void)_parseMetadataObject:(id)arg0 reply:(id)arg1 completionHandler:(unk)arg2  ;
-(void)parseCodeFromImage:(struct CGImage *)arg0 completionHandler:(id)arg1 ;
-(void)parseCodeFromMetadataMachineReadableCodeObject:(id)arg0 completionHandler:(id)arg1 ;
-(void)parseCodeFromString:(id)arg0 completionHandler:(id)arg1 ;
-(void)postNotificationAfterParsingCodeFromImage:(struct CGImage *)arg0 completion:(id)arg1 ;
-(void)setPreferredBundleIdentifier:(id)arg0 forURL:(id)arg1 ;
-(void)startQRCodeParsingSessionWithMetadataObject:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopQRCodeParsingSession;


@end


#endif