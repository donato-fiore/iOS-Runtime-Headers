// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTSETSPEECHCONTEXT_H
#define FTSETSPEECHCONTEXT_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTSetSpeechContext : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SetSpeechContext _root;
}


@property (readonly, nonatomic) NSArray *context_with_pron_hints;
@property (readonly, nonatomic) NSArray *contextual_text;
@property (readonly, nonatomic) NSString *left_context;
@property (readonly, nonatomic) NSString *right_context;


-(id)context_with_pron_hints_objectAtIndex:(NSUInteger)arg0 ;
-(id)contextual_text_objectAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SetSpeechContext *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SetSpeechContext *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::SetSpeechContext> )addObjectToBuffer:(*void)arg0 ;
-(void)context_with_pron_hints_enumerateObjectsUsingBlock:(id)arg0 ;
-(void)contextual_text_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif