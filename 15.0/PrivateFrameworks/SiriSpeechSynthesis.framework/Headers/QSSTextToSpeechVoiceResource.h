// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSTEXTTOSPEECHVOICERESOURCE_H
#define QSSTEXTTOSPEECHVOICERESOURCE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSTextToSpeechVoiceResource : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechVoiceResource _root;
}


@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSInteger type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechVoiceResource *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechVoiceResource *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechVoiceResource> )addObjectToBuffer:(*void)arg0 ;
-(void)data:(id)arg0 ;


@end


#endif