// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUIKEYBOARDBACKENDCONTROLLER_H
#define TUIKEYBOARDBACKENDCONTROLLER_H

@class TIKeyboardInputManagerStub, NSHashTable;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface TUIKeyboardBackendController : NSObject {
    BOOL _applicationIsInBackground;
    BOOL _needsRestoreSupplementalLexicons;
}


@property (retain, nonatomic) TIKeyboardInputManagerStub *inputManager; // ivar: _inputManager
@property (retain, nonatomic) NSObject<OS_dispatch_source> *supplementalLexiconWatchdog; // ivar: _supplementalLexiconWatchdog
@property (readonly, nonatomic) NSHashTable *supplementalLexicons; // ivar: _supplementalLexicons


+(id)sharedInstance;
-(void)_restoreSupplementalLexiconsIfNeeded;
-(void)addUISupplementalLexicon:(id)arg0 ;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg0 candidateRange:(struct _NSRange )arg1 requestToken:(id)arg2 completionHandler:(id)arg3 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleKeyboardInput:(id)arg0 keyboardState:(id)arg1 completionHandler:(id)arg2 ;
-(void)performHitTestForTouchEvents:(id)arg0 keyboardState:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeUISupplementalLexicon:(id)arg0 ;
-(void)syncToKeyboardState:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif