// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APSPERAPPTOKENMAP_H
#define APSPERAPPTOKENMAP_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface APSPerAppTokenMap : NSObject {
    NSMutableDictionary *_perAppTokenMap;
    NSInteger _missingTokens;
    BOOL _enumerating;
}




-(BOOL)flagForTopic:(id)arg0 identifier:(id)arg1 ;
-(BOOL)hasMissingTokens;
-(BOOL)isEmpty;
-(id)allPerAppTokens;
-(id)debugDescription;
-(id)description;
-(id)identifiersForTopic:(id)arg0 ;
-(id)infoForTopic:(id)arg0 identifier:(id)arg1 ;
-(id)init;
-(id)tokenForTopic:(id)arg0 identifier:(id)arg1 ;
-(id)tokensForTopic:(id)arg0 ;
-(id)topics;
-(void)enumerateMissingTokensUsingBlock:(id)arg0 ;
-(void)enumerateTokensUsingBlock:(id)arg0 ;
-(void)enumerateTokensWithInfoUsingBlock:(id)arg0 ;
-(void)removeAllTokens;
-(void)removeIdentifier:(id)arg0 forTopic:(id)arg1 ;
-(void)setFlag:(BOOL)arg0 forTopic:(id)arg1 identifier:(id)arg2 ;
-(void)setToken:(id)arg0 forInfo:(id)arg1 ;
-(void)setToken:(id)arg0 forTopic:(id)arg1 identifier:(id)arg2 ;


@end


#endif