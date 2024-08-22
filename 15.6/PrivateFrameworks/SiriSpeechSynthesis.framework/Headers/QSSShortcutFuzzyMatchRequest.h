// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSSHORTCUTFUZZYMATCHREQUEST_H
#define QSSSHORTCUTFUZZYMATCHREQUEST_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSShortcutFuzzyMatchRequest_StringTokenPair.h"

@interface QSSShortcutFuzzyMatchRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *ShortcutFuzzyMatchRequest _root;
}


@property (readonly, nonatomic) NSString *context;
@property (readonly, nonatomic) NSString *device_type;
@property (readonly, nonatomic) NSString *interaction_id;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSArray *shortcuts;
@property (readonly, nonatomic) QSSShortcutFuzzyMatchRequest_StringTokenPair *utterance;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ShortcutFuzzyMatchRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ShortcutFuzzyMatchRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::ShortcutFuzzyMatchRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif