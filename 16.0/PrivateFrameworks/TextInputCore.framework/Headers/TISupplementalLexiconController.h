// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TISUPPLEMENTALLEXICONCONTROLLER_H
#define TISUPPLEMENTALLEXICONCONTROLLER_H

@class NSMutableDictionary, TISupplementalLexicon;
@protocol OS_dispatch_source, TISupplementalLexiconControllerDelegate;

#import <Foundation/Foundation.h>


@interface TISupplementalLexiconController : NSObject {
    NSMutableDictionary *_lexicons;
    NSMutableDictionary *_entityStores;
    NSUInteger _activeLexiconIdentifier;
    NSObject<OS_dispatch_source> *_processExitDispatchSource;
    BOOL _needsAtSignSearchPrefixQuirk;
}


@property (readonly, nonatomic) TISupplementalLexicon *activeLexicon;
@property (readonly, nonatomic) *_LXLexicon activePhraseLexicon;
@property (readonly, nonatomic) *_LXLexicon activeWordLexicon;
@property (readonly, nonatomic) int connectionIdentifier; // ivar: _connectionIdentifier
@property (weak, nonatomic) NSObject<TISupplementalLexiconControllerDelegate> *delegate; // ivar: _delegate


-(id)identifiersOfItemsEqualToMecrabraCandidate:(id)arg0 ;
-(id)initWithConnection:(id)arg0 ;
-(id)lexiconIdentifiers;
-(id)lexiconWithIdentifier:(NSUInteger)arg0 ;
-(void)addLexicon:(id)arg0 ;
-(void)clearActiveLexicon;
-(void)removeLexiconWithIdentifier:(NSUInteger)arg0 ;


@end


#endif