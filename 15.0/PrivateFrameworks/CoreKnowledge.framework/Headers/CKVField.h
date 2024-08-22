// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVFIELD_H
#define CKVFIELD_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface CKVField : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *Field _root;
}


@property (readonly, nonatomic) NSInteger fieldType;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *value;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct Field *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct Field *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<Siri::Vocabulary::Field> )addObjectToBuffer:(*void)arg0 ;


@end


#endif