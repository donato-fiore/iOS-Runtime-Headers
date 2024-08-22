// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTSHORTCUTFUZZYMATCHREQUEST_STRINGTOKENPAIR_H
#define FTSHORTCUTFUZZYMATCHREQUEST_STRINGTOKENPAIR_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTShortcutFuzzyMatchRequest_StringTokenPair : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *StringTokenPair _root;
}


@property (readonly, nonatomic) NSString *raw_string;
@property (readonly, nonatomic) NSArray *tokens;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct StringTokenPair *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct StringTokenPair *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::ShortcutFuzzyMatchRequest_::StringTokenPair> )addObjectToBuffer:(*void)arg0 ;


@end


#endif