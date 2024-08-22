// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACPROFANITYNODE_H
#define CACPROFANITYNODE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CACProfanityNode : NSObject {
    NSMutableDictionary *_childMap;
    NSMutableDictionary *_terminalMap;
    NSMutableDictionary *_originalWordMap;
}




-(id)childForKey:(id)arg0 ;
-(id)description;
-(id)init;
-(id)originalWordForKey:(id)arg0 ;
-(id)terminalForKey:(id)arg0 ;
-(void)createChildForKey:(id)arg0 ;
-(void)setTerminal:(id)arg0 originalWord:(id)arg1 forKey:(id)arg2 ;


@end


#endif