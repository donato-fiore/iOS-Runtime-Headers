// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSPEECHSYNTHESISINTERNALSETTING_H
#define SFSPEECHSYNTHESISINTERNALSETTING_H

@class NSUserDefaults, NSString;

#import <Foundation/Foundation.h>


@interface SFSpeechSynthesisInternalSetting : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults
@property (readonly, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) BOOL disableCaching;
@property (readonly, nonatomic) NSString *ospreyEndpointURL;


+(id)sharedInstance;
-(id)init;
-(id)ospreyEndpointURLByType:(NSInteger)arg0 ;


@end


#endif