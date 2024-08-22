// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INVOCABULARYCONNECTION_H
#define _INVOCABULARYCONNECTION_H

@class NSXPCConnection;
@protocol INIntentPreferencesAndVocabularyUpdateService, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _INVocabularyConnection : NSObject {
    NSXPCConnection *_connection;
    id<INIntentPreferencesAndVocabularyUpdateService> *_remoteObjectProxy;
    NSObject<OS_dispatch_queue> *_queue;
}




+(void)initialize;
-(id)_connection;
-(id)_syncService;
-(id)init;
-(id)settingsService;
-(void)_clearConnection;
-(void)dealloc;


@end


#endif