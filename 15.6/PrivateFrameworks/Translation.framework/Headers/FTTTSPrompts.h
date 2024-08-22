// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTTTSPROMPTS_H
#define FTTTSPROMPTS_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTTTSPrompts : NSObject <FLTBFBufferAccessor, NSCopying>

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
-(struct Offset<siri::speech::schema_fb::TTSPrompts> )addObjectToBuffer:(*void)arg0 ;
-(void)prompts_v2:(id)arg0 ;


@end


#endif