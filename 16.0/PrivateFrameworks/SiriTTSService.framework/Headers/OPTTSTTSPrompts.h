// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OPTTSTTSPROMPTS_H
#define OPTTSTTSPROMPTS_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface OPTTSTTSPrompts : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TTSPrompts _root;
}


@property (readonly, nonatomic) NSArray *prompts;
@property (readonly, nonatomic) NSData *prompts_v2;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TTSPrompts *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TTSPrompts *)arg1 verify:(BOOL)arg2 ;
-(id)prompts_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::TTSPrompts> )addObjectToBuffer:(*void)arg0 ;
-(void)prompts_enumerateObjectsUsingBlock:(id)arg0 ;
-(void)prompts_v2:(id)arg0 ;


@end


#endif