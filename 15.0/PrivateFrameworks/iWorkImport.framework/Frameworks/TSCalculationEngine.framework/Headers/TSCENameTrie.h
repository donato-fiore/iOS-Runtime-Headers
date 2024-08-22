// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCENAMETRIE_H
#define TSCENAMETRIE_H

@class TSULocale;

#import <Foundation/Foundation.h>


@interface TSCENameTrie : NSObject {
    TSCENameTrieNode _root;
    TSULocale *_locale;
}




-(*void)nodeForName:(id)arg0 createIfMissing:(BOOL)arg1 ;
-(BOOL)containsName:(id)arg0 ;
-(BOOL)insertFoldedName:(id)arg0 ;
-(BOOL)insertName:(id)arg0 ;
-(id)foldName:(id)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(void)enumerateNamesMatchingPrefix:(id)arg0 block:(id)arg1 ;
-(void)removeName:(id)arg0 ;
-(void)setLocale:(id)arg0 ;


@end


#endif