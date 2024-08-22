// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTSTARTMULTILINGUALSPEECHREQUEST_H
#define FTSTARTMULTILINGUALSPEECHREQUEST_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTStartSpeechRequest.h"

@interface FTStartMultilingualSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *StartMultilingualSpeechRequest _root;
}


@property (readonly, nonatomic) NSArray *language_parameters_by_id;
@property (readonly, nonatomic) FTStartSpeechRequest *start_speech_request;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct StartMultilingualSpeechRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct StartMultilingualSpeechRequest *)arg1 verify:(BOOL)arg2 ;
-(id)language_parameters_by_id_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::StartMultilingualSpeechRequest> )addObjectToBuffer:(*void)arg0 ;
-(void)language_parameters_by_id_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif