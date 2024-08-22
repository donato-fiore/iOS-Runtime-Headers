// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSPEECHSYNTHESISSERVERVOICECONFIG_H
#define SFSPEECHSYNTHESISSERVERVOICECONFIG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SFSpeechSynthesisServerVoiceConfig : NSObject

@property (readonly, nonatomic) BOOL enableAuthentication; // ivar: _enableAuthentication
@property (readonly, nonatomic) NSString *ospreyEndpointUrl; // ivar: _ospreyEndpointUrl
@property (readonly, nonatomic) BOOL useBlazar; // ivar: _useBlazar


+(id)getTtsServerEndpointByCluster:(id)arg0 withServiceType:(id)arg1 ;
-(id)initWithUrl:(id)arg0 useBlazar:(BOOL)arg1 enableAuthentication:(BOOL)arg2 ;


@end


#endif