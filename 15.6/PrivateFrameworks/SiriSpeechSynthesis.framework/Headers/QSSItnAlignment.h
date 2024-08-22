// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSITNALIGNMENT_H
#define QSSITNALIGNMENT_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSItnAlignment : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *ItnAlignment _root;
}


@property (readonly, nonatomic) int first_post_itn_char_pos;
@property (readonly, nonatomic) int first_pre_itn_token_index;
@property (readonly, nonatomic) int last_post_itn_char_pos;
@property (readonly, nonatomic) int last_pre_itn_token_index;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ItnAlignment *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ItnAlignment *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::ItnAlignment> )addObjectToBuffer:(*void)arg0 ;


@end


#endif