// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSSHORTCUTFUZZYMATCHRESPONSE_SHORTCUTSCOREPAIR_H
#define QSSSHORTCUTFUZZYMATCHRESPONSE_SHORTCUTSCOREPAIR_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSShortcutFuzzyMatchResponse_ShortcutScorePair : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *ShortcutScorePair _root;
}


@property (readonly, nonatomic) NSString *shortcut;
@property (readonly, nonatomic) CGFloat similarity_score;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ShortcutScorePair *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ShortcutScorePair *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::ShortcutFuzzyMatchResponse_::ShortcutScorePair> )addObjectToBuffer:(*void)arg0 ;


@end


#endif