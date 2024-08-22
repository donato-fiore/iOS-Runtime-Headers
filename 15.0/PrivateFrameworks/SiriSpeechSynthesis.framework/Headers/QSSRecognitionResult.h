// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSRECOGNITIONRESULT_H
#define QSSRECOGNITIONRESULT_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSRecognitionSausage.h"

@interface QSSRecognitionResult : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *RecognitionResult _root;
}


@property (readonly, nonatomic) NSArray *choice_alignments;
@property (readonly, nonatomic) QSSRecognitionSausage *post_itn;
@property (readonly, nonatomic) NSArray *post_itn_nbest_choices;
@property (readonly, nonatomic) QSSRecognitionSausage *pre_itn;
@property (readonly, nonatomic) NSArray *pre_itn_nbest_choices;
@property (readonly, nonatomic) NSArray *pre_itn_token_to_post_itn_char_alignment;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RecognitionResult *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RecognitionResult *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::RecognitionResult> )addObjectToBuffer:(*void)arg0 ;


@end


#endif