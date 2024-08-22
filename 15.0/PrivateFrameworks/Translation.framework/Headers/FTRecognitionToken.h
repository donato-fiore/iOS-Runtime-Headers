// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTRECOGNITIONTOKEN_H
#define FTRECOGNITIONTOKEN_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTRecognitionToken : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *RecognitionToken _root;
}


@property (readonly, nonatomic) BOOL add_space_after;
@property (readonly, nonatomic) int confidence;
@property (readonly, nonatomic) int end_milli_seconds;
@property (readonly, nonatomic) NSString *ipa_phone_seq;
@property (readonly, nonatomic) NSString *phone_seq;
@property (readonly, nonatomic) int silence_start_milli_seconds;
@property (readonly, nonatomic) int start_milli_seconds;
@property (readonly, nonatomic) NSString *token_text;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RecognitionToken *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RecognitionToken *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::RecognitionToken> )addObjectToBuffer:(*void)arg0 ;


@end


#endif