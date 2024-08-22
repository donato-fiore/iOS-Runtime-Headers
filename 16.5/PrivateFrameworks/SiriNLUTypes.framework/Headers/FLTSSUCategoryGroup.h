// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLTSSUCATEGORYGROUP_H
#define FLTSSUCATEGORYGROUP_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FLTSSUCategoryGroup : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SSUCategoryGroup _root;
}


@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *negative_examples;
@property (readonly, nonatomic) NSArray *positive_intents;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SSUCategoryGroup *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SSUCategoryGroup *)arg1 verify:(BOOL)arg2 ;
-(id)negative_examples_objectAtIndex:(NSUInteger)arg0 ;
-(id)positive_intents_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<SSUCategoryGroup> )addObjectToBuffer:(*void)arg0 ;
-(void)negative_examples_enumerateObjectsUsingBlock:(id)arg0 ;
-(void)positive_intents_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif