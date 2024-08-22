// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLTSSUCATEGORY_H
#define FLTSSUCATEGORY_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FLTSSUCategory : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SSUCategory _root;
}


@property (readonly, nonatomic) NSArray *groups;
@property (readonly, nonatomic) NSInteger type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)groups_objectAtIndex:(NSUInteger)arg0 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SSUCategory *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SSUCategory *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<SSUCategory> )addObjectToBuffer:(*void)arg0 ;
-(void)groups_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif