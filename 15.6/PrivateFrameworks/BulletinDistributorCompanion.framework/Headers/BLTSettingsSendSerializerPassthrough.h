// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTSETTINGSSENDSERIALIZERPASSTHROUGH_H
#define BLTSETTINGSSENDSERIALIZERPASSTHROUGH_H

@protocol BLTSettingsSendSerializerDelegate;

#import <Foundation/Foundation.h>


@interface BLTSettingsSendSerializerPassthrough : NSObject

@property (weak, nonatomic) NSObject<BLTSettingsSendSerializerDelegate> *delegate; // ivar: _delegate


-(void)handleFileURL:(id)arg0 ;
// -(void)sendNowWithSent:(id)arg0 withAcknowledgement:(unk)arg1 withTimeout:(id)arg2  ;
// -(void)sendRequest:(id)arg0 type:(unsigned short)arg1 withTimeout:(id)arg2 withDescription:(id)arg3 onlyOneFor:(id)arg4 didSend:(id)arg5 andResponse:(unk)arg6 spoolToFile:(id)arg7  ;


@end


#endif