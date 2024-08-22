// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSUSERDATAENTITY_H
#define QSSUSERDATAENTITY_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSUserDataEntity : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *UserDataEntity _root;
}


@property (readonly, nonatomic) NSArray *attributes;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct UserDataEntity *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct UserDataEntity *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::UserDataEntity> )addObjectToBuffer:(*void)arg0 ;


@end


#endif