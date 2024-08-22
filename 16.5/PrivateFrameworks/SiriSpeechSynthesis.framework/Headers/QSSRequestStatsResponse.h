// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSREQUESTSTATSRESPONSE_H
#define QSSREQUESTSTATSRESPONSE_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSRequestStatsResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *RequestStatsResponse _root;
}


@property (readonly, nonatomic) NSArray *bool_stats;
@property (readonly, nonatomic) NSArray *double_stats;
@property (readonly, nonatomic) NSArray *int32_stats;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *request_locale;
@property (readonly, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RequestStatsResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RequestStatsResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::RequestStatsResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif