// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSCORRECTIONSVALIDATORREQUEST_H
#define QSSCORRECTIONSVALIDATORREQUEST_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSRecognitionResult.h"

@interface QSSCorrectionsValidatorRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *CorrectionsValidatorRequest _root;
}


@property (readonly, nonatomic) NSString *corrected_utterance;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *original_utterance;
@property (readonly, nonatomic) QSSRecognitionResult *recognition_result;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct CorrectionsValidatorRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct CorrectionsValidatorRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::CorrectionsValidatorRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif