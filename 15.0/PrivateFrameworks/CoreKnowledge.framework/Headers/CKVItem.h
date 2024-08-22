// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVITEM_H
#define CKVITEM_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface CKVItem : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *Item _root;
}


@property (readonly, nonatomic) NSArray *fields;
@property (readonly, nonatomic) NSString *itemId;
@property (readonly, nonatomic) NSInteger itemType;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct Item *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct Item *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<Siri::Vocabulary::Item> )addObjectToBuffer:(*void)arg0 ;


@end


#endif