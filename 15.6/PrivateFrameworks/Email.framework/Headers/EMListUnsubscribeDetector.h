// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMLISTUNSUBSCRIBEDETECTOR_H
#define EMLISTUNSUBSCRIBEDETECTOR_H

@protocol EMMutableDictionaryProtocol;

#import <Foundation/Foundation.h>


@interface EMListUnsubscribeDetector : NSObject {
    id<EMMutableDictionaryProtocol> *_persistentDictionary;
}




+(id)receivingAccountFromMessage:(id)arg0 ;
-(BOOL)_shouldIgnoreMessageWithHeaders:(id)arg0 ;
-(id)_listIDString:(id)arg0 ;
-(id)_normalizedAddress:(id)arg0 ;
-(id)_persistentKeyForHeaders:(id)arg0 ;
-(id)_senderString:(id)arg0 ;
-(id)commandForMessage:(id)arg0 ;
-(id)init;
-(id)initWithMutableDictionary:(id)arg0 ;
-(void)acceptCommand:(id)arg0 ;
-(void)ignoreCommand:(id)arg0 ;
-(void)removeAllPersistedCommands;


@end


#endif