// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSTEXTTOSPEECHREQUESTCONTEXT_CONTEXTINFOENTRY_H
#define QSSTEXTTOSPEECHREQUESTCONTEXT_CONTEXTINFOENTRY_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSTextToSpeechRequestContext_ContextInfoEntry : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *ContextInfoEntry _root;
}


@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *value;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ContextInfoEntry *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ContextInfoEntry *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechRequestContext_::ContextInfoEntry> )addObjectToBuffer:(*void)arg0 ;


@end


#endif