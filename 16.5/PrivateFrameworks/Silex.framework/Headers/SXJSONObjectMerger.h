// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXJSONOBJECTMERGER_H
#define SXJSONOBJECTMERGER_H

@class NSArray, NSMutableDictionary;
@protocol SXJSONObjectMergerClassProviding;

#import <Foundation/Foundation.h>


@interface SXJSONObjectMerger : NSObject

@property (readonly, nonatomic) NSObject<SXJSONObjectMergerClassProviding> *classProvider; // ivar: _classProvider
@property (readonly, nonatomic) NSArray *exclusionKeys; // ivar: _exclusionKeys
@property (readonly, nonatomic) NSMutableDictionary *transformers; // ivar: _transformers


-(id)appendKey:(id)arg0 keyPath:(id)arg1 ;
-(id)initWithClassProvider:(id)arg0 exclusionKeys:(id)arg1 ;
-(id)initWithObjectClass:(Class)arg0 exclusionKeys:(id)arg1 ;
-(id)mergeDictionary:(id)arg0 withDictionary:(id)arg1 keyPath:(id)arg2 ;
-(id)mergeObjects:(id)arg0 ;
-(id)replaceLastKeyOfKeyPath:(id)arg0 withKey:(id)arg1 ;
-(void)addTransformer:(id)arg0 keyPath:(id)arg1 ;
-(void)removeTransformerForKeyPath:(id)arg0 ;
-(void)transformObject:(id)arg0 otherObject:(id)arg1 transformer:(id)arg2 key:(id)arg3 keyPath:(id)arg4 dictionary:(id)arg5 ;


@end


#endif