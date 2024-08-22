// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INUSERCONTEXTSTORE_H
#define INUSERCONTEXTSTORE_H

@class CKKnowledgeStore;

#import <Foundation/Foundation.h>


@interface INUserContextStore : NSObject {
    CKKnowledgeStore *_knowledgeStore;
}




+(id)findDataInValue:(id)arg0 ;
+(id)keyForBundleIdentifier:(id)arg0 andType:(NSInteger)arg1 ;
+(id)keyPrefixForType:(NSInteger)arg0 ;
+(id)sharedStore;
-(id)_init;
-(id)_initWithKnowledgeStore:(id)arg0 ;
-(void)removeUserContextOfClass:(Class)arg0 forBundleIdentifier:(id)arg1 ;
-(void)storeUserContext:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)storeUserContextViaHelper:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)userContextOfClass:(Class)arg0 forBundleIdentifiers:(id)arg1 withCompletion:(id)arg2 ;
-(void)userContextOfClass:(Class)arg0 withCompletion:(id)arg1 ;


@end


#endif