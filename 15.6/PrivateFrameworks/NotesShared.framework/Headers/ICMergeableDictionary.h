// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICMERGEABLEDICTIONARY_H
#define ICMERGEABLEDICTIONARY_H

@class NSArray, NSUUID;

#import <Foundation/Foundation.h>

#import "CRDictionary.h"
#import "CRDocument.h"

@interface ICMergeableDictionary : NSObject

@property (readonly, copy, nonatomic) NSArray *allKeys;
@property (readonly, nonatomic) CRDictionary *dictionary; // ivar: _dictionary
@property (readonly, nonatomic) CRDocument *document; // ivar: _document
@property (readonly, copy, nonatomic) NSUUID *replicaID;


-(NSUInteger)mergeWithDictionary:(id)arg0 ;
-(id)description;
-(id)encodedData;
-(id)initWithData:(id)arg0 replicaID:(id)arg1 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif