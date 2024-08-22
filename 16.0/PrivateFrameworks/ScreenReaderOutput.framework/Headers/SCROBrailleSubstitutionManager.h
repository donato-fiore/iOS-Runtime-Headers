// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCROBRAILLESUBSTITUTIONMANAGER_H
#define SCROBRAILLESUBSTITUTIONMANAGER_H

@class NSMutableDictionary, NSLinguisticTagger;

#import <Foundation/Foundation.h>


@interface SCROBrailleSubstitutionManager : NSObject {
    NSMutableDictionary *_lookup;
    NSLinguisticTagger *_linguisticTagger;
    os_unfair_lock_s _taggerLock;
}




+(id)_bundleForStrings;
+(id)sharedInstance;
-(id)brailleSubstitutionForType:(NSInteger)arg0 withLanguage:(id)arg1 ;
-(id)init;
-(id)stringWithBrailleSubstitutions:(id)arg0 withLanguage:(id)arg1 ;
-(void)_ensureLanguageDataPresent:(id)arg0 ;
-(void)_loadLanguageSubstitutions:(id)arg0 intoDictionary:(id)arg1 ;


@end


#endif