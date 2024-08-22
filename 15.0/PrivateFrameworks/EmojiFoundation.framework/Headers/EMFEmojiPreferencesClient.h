// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMFEMOJIPREFERENCESCLIENT_H
#define EMFEMOJIPREFERENCESCLIENT_H

@class NSXPCConnection, NSString;


#import "EMFEmojiPreferences.h"

@interface EMFEmojiPreferencesClient : EMFEmojiPreferences {
    NSXPCConnection *_connection;
}


@property (nonatomic) BOOL isValid; // ivar: _isValid
@property (retain, nonatomic) NSString *machName; // ivar: _machName


+(id)differentialPrivacyRecorderForEmoji:(id)arg0 usageMode:(id)arg1 ;
+(id)serviceInterface;
-(id)_initWithoutConnection;
-(id)initWithMachName:(id)arg0 ;
-(void)_disconnect;
-(void)createConnectionIfNecessary;
-(void)dealloc;
-(void)didDisplaySkinToneHelp;
-(void)didUseEmoji:(id)arg0 ;
-(void)didUseEmoji:(id)arg0 usageMode:(id)arg1 ;
-(void)didUseEmoji:(id)arg0 usageMode:(id)arg1 typingName:(id)arg2 ;
-(void)didViewEmojiIndex:(NSInteger)arg0 forCategory:(id)arg1 ;
-(void)writeEmojiDefaults;
-(void)writeEmojiDefaultsAndNotify:(BOOL)arg0 ;


@end


#endif