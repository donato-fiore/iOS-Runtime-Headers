// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACCCARPLAY_H
#define ACCCARPLAY_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface ACCCarPlay : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)sharedManager;
-(id)_init;
-(void)carPlayAppLinksStateForCertSerial:(id)arg0 withReply:(id)arg1 ;
-(void)carPlayIconStateForCertSerial:(id)arg0 andAppCategories:(NSUInteger)arg1 withReply:(id)arg2 ;
-(void)carPlayStartSessionForConnectionID:(unsigned int)arg0 properties:(id)arg1 ;
-(void)isCarPlayPairedWithCertSerial:(id)arg0 withReply:(id)arg1 ;
-(void)isWirelessCarPlayAllowedForCertSerial:(id)arg0 withReply:(id)arg1 ;


@end


#endif