// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUOVERRIDESTRIEBUNDLE_H
#define SIRINLUOVERRIDESTRIEBUNDLE_H


#import <Foundation/Foundation.h>

#import "SiriNLUMarisaTrie.h"

@interface SiriNLUOverridesTrieBundle : NSObject {
    SiriNLUMarisaTrie *ruleTrie;
    SiriNLUMarisaTrie *patternTrie;
    SiriNLUMarisaTrie *overrideIdTrie;
    SiriNLUMarisaTrie *userParseTrie;
    SiriNLUMarisaTrie *overrideTimeStampTrie;
}




+(id)buildPatternTrieLookupKey:(id)arg0 locale:(id)arg1 overrideNamespace:(NSInteger)arg2 ;
+(id)getTrieURLs:(id)arg0 ;
-(NSUInteger)fetchOverrideTimeStamp:(id)arg0 ;
-(id)fetchOverrideId:(id)arg0 ;
-(id)fetchOverrideIdArray:(id)arg0 ;
-(id)fetchRegexRuleIds;
-(id)fetchRuleId:(id)arg0 locale:(id)arg1 overrideNamespace:(NSInteger)arg2 ;
-(id)fetchSerializedNluRequestRule:(id)arg0 ;
-(id)fetchSerializedUserParse:(id)arg0 ;
-(id)init:(id)arg0 ;


@end


#endif