// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKKNOWLEDGESTORAGESIMPLEKEYVALUESTORE_H
#define _DKKNOWLEDGESTORAGESIMPLEKEYVALUESTORE_H

@class NSString;
@protocol _DKSimpleKeyValueStore;

#import <Foundation/Foundation.h>

#import "_DKKnowledgeStorage.h"

@interface _DKKnowledgeStorageSimpleKeyValueStore : NSObject <_DKSimpleKeyValueStore>

 {
    _DKKnowledgeStorage *_storage;
    NSString *_domain;
}




-(id)objectForKey:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif