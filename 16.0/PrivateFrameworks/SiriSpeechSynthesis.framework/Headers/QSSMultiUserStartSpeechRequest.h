// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMULTIUSERSTARTSPEECHREQUEST_H
#define QSSMULTIUSERSTARTSPEECHREQUEST_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSStartSpeechRequest.h"

@interface QSSMultiUserStartSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *MultiUserStartSpeechRequest _root;
}


@property (readonly, nonatomic) NSString *primary_speech_id;
@property (readonly, nonatomic) QSSStartSpeechRequest *start_speech_request;
@property (readonly, nonatomic) NSArray *user_parameters;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct MultiUserStartSpeechRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct MultiUserStartSpeechRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::MultiUserStartSpeechRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif