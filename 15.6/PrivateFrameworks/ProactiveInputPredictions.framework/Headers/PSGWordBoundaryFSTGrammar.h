// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSGWORDBOUNDARYFSTGRAMMAR_H
#define PSGWORDBOUNDARYFSTGRAMMAR_H

@class NSCache;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PSGWordBoundaryFSTGrammar : NSObject {
    NSCache *_lmWrapperCache;
    NSObject<OS_dispatch_queue> *_lmWrapperQueue;
}




+(id)sharedInstance;
-(*void)_createLanguageModel:(id)arg0 ;
-(*void)_createLexicon:(id)arg0 ;
-(id)_getLMWrapper:(id)arg0 ;
-(id)_getPrimingToken:(*void)arg0 transientTokenID:(unsigned int)arg1 ;
-(id)getOTAPathForProactiveBundle:(id)arg0 ;
-(id)init;
-(id)triggerAttributesForContext:(id)arg0 localeIdentifier:(id)arg1 ;
-(void)clearLMCache;
-(void)warmUpForLocaleIdentifier:(id)arg0 ;
-(void)warmUpForLocaleIdentifier:(id)arg0 waitForCompletion:(BOOL)arg1 ;


@end


#endif