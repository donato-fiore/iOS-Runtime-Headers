// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTSHORTCUTFUZZYMATCHRESPONSE_H
#define FTSHORTCUTFUZZYMATCHRESPONSE_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTShortcutFuzzyMatchResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *ShortcutFuzzyMatchResponse _root;
}


@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSArray *shortcut_score_pairs;
@property (readonly, nonatomic) NSString *utterance;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ShortcutFuzzyMatchResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ShortcutFuzzyMatchResponse *)arg1 verify:(BOOL)arg2 ;
-(id)shortcut_score_pairs_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::ShortcutFuzzyMatchResponse> )addObjectToBuffer:(*void)arg0 ;
-(void)shortcut_score_pairs_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif