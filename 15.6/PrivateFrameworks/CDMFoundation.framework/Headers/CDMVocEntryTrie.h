// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMVOCENTRYTRIE_H
#define CDMVOCENTRYTRIE_H


#import <Foundation/Foundation.h>

#import "CDMMarisaTrie.h"

@interface CDMVocEntryTrie : NSObject {
    CDMMarisaTrie *_vocTrie;
}


@property (readonly, nonatomic) BOOL isValid;


-(BOOL)hasEntry:(id)arg0 ;
-(BOOL)hasPrefix:(id)arg0 ;
-(id)entriesForText:(id)arg0 ;
-(id)initWithFilePath:(id)arg0 versionNumber:(id)arg1 ;


@end


#endif