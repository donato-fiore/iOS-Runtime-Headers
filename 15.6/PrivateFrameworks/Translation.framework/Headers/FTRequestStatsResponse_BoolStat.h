// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTREQUESTSTATSRESPONSE_BOOLSTAT_H
#define FTREQUESTSTATSRESPONSE_BOOLSTAT_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTRequestStatsResponse_BoolStat : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *BoolStat _root;
}


@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL value;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BoolStat *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BoolStat *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::RequestStatsResponse_::BoolStat> )addObjectToBuffer:(*void)arg0 ;


@end


#endif