// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OPTTSTEXTTOSPEECHREQUESTCONTEXT_H
#define OPTTSTEXTTOSPEECHREQUESTCONTEXT_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface OPTTSTextToSpeechRequestContext : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechRequestContext _root;
}


@property (readonly, nonatomic) NSArray *context_info;
@property (readonly, nonatomic) NSString *dialog_identifier;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechRequestContext *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechRequestContext *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechRequestContext> )addObjectToBuffer:(*void)arg0 ;


@end


#endif