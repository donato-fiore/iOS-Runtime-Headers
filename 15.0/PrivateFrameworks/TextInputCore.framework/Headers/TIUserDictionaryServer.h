// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIUSERDICTIONARYSERVER_H
#define TIUSERDICTIONARYSERVER_H

@class NSMutableArray, NSArray, NSString, _KSTextReplacementServer, NSUUID;
@protocol TIKeyboardActivityObserving, TIUserDictionaryServing, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TIUserDictionaryServer : NSObject <TIKeyboardActivityObserving, TIUserDictionaryServing>

 {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_observers;
    NSArray *_cache;
    BOOL _updating;
    int _pendingUpdates;
    NSUInteger _keyboardActivityState;
    NSInteger _recentClientCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) _KSTextReplacementServer *textReplacementServer; // ivar: _textReplacementServer
@property (copy, nonatomic) NSUUID *userDictionaryUUID; // ivar: _userDictionaryUUID


+(CGFloat)decrementClientDelay;
+(id)sharedInstance;
+(id)singletonInstance;
+(void)setSharedInstance:(id)arg0 ;
-(id)addObserver:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)decrementRecentClientCountAfterDelay;
-(void)getPhraseShortcutPairs:(id)arg0 ;
-(void)handleIdleTimeout;
-(void)incrementRecentClientCount;
-(void)keyboardActivityDidTransition:(id)arg0 ;
-(void)loadPhraseShortcutPairs:(id)arg0 ;
-(void)managedKeyboardSettingsDidChange:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)resetCache;
-(void)startServer;
-(void)updateCache;


@end


#endif