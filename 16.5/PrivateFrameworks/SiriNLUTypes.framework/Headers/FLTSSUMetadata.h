// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLTSSUMETADATA_H
#define FLTSSUMETADATA_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FLTSSUMetadata : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SSUMetadata _root;
}


@property (readonly, nonatomic) NSString *data_version;
@property (readonly, nonatomic) NSString *encoder_version;
@property (readonly, nonatomic) NSInteger timestamp;
@property (readonly, nonatomic) NSArray *user_data;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SSUMetadata *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SSUMetadata *)arg1 verify:(BOOL)arg2 ;
-(id)user_data_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<SSUMetadata> )addObjectToBuffer:(*void)arg0 ;
-(void)user_data_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif