// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTRECOVERPRONSRESPONSE_H
#define FTRECOVERPRONSRESPONSE_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTRecoverPronsResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *RecoverPronsResponse _root;
}


@property (readonly, nonatomic) int error_code;
@property (readonly, nonatomic) NSString *error_str;
@property (readonly, nonatomic) NSArray *recovery_return_codes;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSArray *voc_tokens;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RecoverPronsResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RecoverPronsResponse *)arg1 verify:(BOOL)arg2 ;
-(id)recovery_return_codes_objectAtIndex:(NSUInteger)arg0 ;
-(id)voc_tokens_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::RecoverPronsResponse> )addObjectToBuffer:(*void)arg0 ;
-(void)recovery_return_codes_enumerateObjectsUsingBlock:(id)arg0 ;
-(void)voc_tokens_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif