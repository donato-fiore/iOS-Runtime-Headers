// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSPOSTITNHAMMERRESPONSE_H
#define QSSPOSTITNHAMMERRESPONSE_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSPostItnHammerResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *PostItnHammerResponse _root;
}


@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSArray *tokens;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct PostItnHammerResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct PostItnHammerResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::PostItnHammerResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif