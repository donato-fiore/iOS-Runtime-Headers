// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMMARISATRIE_H
#define CDMMARISATRIE_H

@class NSString, NSNumber;
@protocol CDMBaseTrie;

#import <Foundation/Foundation.h>


@interface CDMMarisaTrie : NSObject <CDMBaseTrie>

 {
    NSString *_filePath;
    Trie _readOnlyTrie;
    NSNumber *_versionNumber;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *hashValue;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) Class superclass;


-(BOOL)_loadTrie;
-(BOOL)createFromEntries:(id)arg0 ;
-(BOOL)createFromEntries:(id)arg0 withHashValue:(id)arg1 ;
-(BOOL)hasEntry:(id)arg0 ;
-(BOOL)hasPrefix:(id)arg0 ;
-(id)_readCachedNumberValueForKey:(id)arg0 ;
-(id)initWithFilePath:(id)arg0 versionNumber:(id)arg1 ;
-(id)traversePrefix:(id)arg0 ;
-(void)dealloc;


@end


#endif