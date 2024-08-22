// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TITRANSIENTLEXICONMANAGER_H
#define TITRANSIENTLEXICONMANAGER_H

@class NSHashTable, NSXPCConnection, NSString;
@protocol TISupplementalLexiconControllerDelegate, TITransientLexiconManaging, _ICLexiconManaging;

#import <Foundation/Foundation.h>

#import "TISupplementalLexiconController.h"

@interface TITransientLexiconManager : NSObject <TISupplementalLexiconControllerDelegate, TITransientLexiconManaging>

 {
    *_LXLexicon _namedEntityLexiconRef;
    *_LXLexicon _namedEntityPhraseLexiconRef;
    NSObject<_ICLexiconManaging> *_inputContextLexiconManager;
    NSHashTable *_supplementalLexicons;
    BOOL _lexiconsLoaded;
}


@property (retain, nonatomic, setter=_setOverridingCurrentConnectionForTesting:) NSXPCConnection *_overridingCurrentConnectionForTesting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TISupplementalLexiconController *ensureSupplementalLexicons;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *_LXLexicon namedEntityLexicon;
@property (readonly, nonatomic) *_LXLexicon namedEntityPhraseLexicon;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSupplementalLexiconSearchEnabled) BOOL supplementalLexiconSearchEnabled; // ivar: _supplementalLexiconSearchEnabled
@property (readonly, nonatomic) TISupplementalLexiconController *supplementalLexicons;


+(id)getEntries:(struct _LXLexicon *)arg0 ;
+(id)sharedInstance;
+(id)singletonInstance;
+(void)setSharedTITransientLexiconManager:(id)arg0 ;
-(BOOL)searchForWord:(id)arg0 ;
-(BOOL)searchForWordCaseInsensitive:(id)arg0 ;
-(BOOL)searchHelper:(struct _LXLexicon *)arg0 forWord:(struct __CFString *)arg1 caseSensitive:(BOOL)arg2 ;
-(id)_currentConnection;
-(id)addContactObserver:(SEL)arg0 ;
-(id)init;
-(void)dealloc;
-(void)debugLogEntities;
-(void)getOnce:(id)arg0 ;
-(void)handleMemoryPressureLevel:(NSUInteger)arg0 excessMemoryInBytes:(NSUInteger)arg1 ;
-(void)keyboardActivityDidTransition:(id)arg0 ;
-(void)loadLexicons;
-(void)provideFeedbackForString:(id)arg0 type:(unsigned char)arg1 style:(unsigned char)arg2 ;
-(void)removeContactObserver:(id)arg0 ;
-(void)supplementalLexiconControllerProcessDidTerminate:(id)arg0 ;


@end


#endif