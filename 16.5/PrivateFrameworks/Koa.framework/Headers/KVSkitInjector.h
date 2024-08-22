// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KVSKITINJECTOR_H
#define KVSKITINJECTOR_H

@class NSString;
@protocol KVSkitReadAccess, KVSkitAccessProvider;

#import <Foundation/Foundation.h>

#import "KVTokenizer.h"

@interface KVSkitInjector : NSObject <KVSkitReadAccess, KVSkitAccessProvider>

 {
    KVTokenizer *_tokenizer;
    Indexer _indexer;
    Searcher _searcher;
    vector<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>, std::allocator<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>>> _documents;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_buildDocumentsFromItems:(id)arg0 error:(*id)arg1 ;
-(BOOL)setItems:(id)arg0 error:(*id)arg1 ;
-(BOOL)supportsMultiUser;
-(id)accessReadOnlySkitForUser:(id)arg0 ;
-(id)indexLocale;
-(id)init;
-(id)initWithItems:(id)arg0 tokenizer:(id)arg1 error:(*id)arg2 ;
-(id)matchSpans:(id)arg0 error:(*id)arg1 ;
-(void)prewarm;


@end


#endif